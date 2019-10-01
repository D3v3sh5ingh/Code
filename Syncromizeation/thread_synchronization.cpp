#include <iostream>
#include <thread>
#include <vector>
#include <chrono>    // for sleep
#include <mutex>
#include <condition_variable>

std::mutex m;
std::condition_variable w1, w2, w3;

void worker1(int id, int sleep_time, int count) {
    std::cout << "Starting Thread" << id << std::endl;

    for (auto i = 1; i <= count; i++) {
        std::string s = "Thread" + std::to_string(id) + " Count " + std::to_string(i) + "\n";
        std::cout << s;

        if (i == 5) {
            // notify thread2
            w2.notify_one();
            // // now, wait on thread1 until some other person wakes it up
            // w1.wait(m);
        }

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "finished thread " << id << std::endl;
}

void worker2(int id, int sleep_time, int count) {

    // wait for some other thread to wake it up
    {    // this scope is necessary otherwise lock will not be unlocked and thread3 won't wake up
        std::unique_lock<std::mutex> lk(m);
        w2.wait(lk);
    }

    std::cout << "Starting Thread" << id << std::endl;
    for (auto i = 1; i <= count; i++) {
        std::string s = "Thread" + std::to_string(id) + " Count " + std::to_string(i) + "\n";
        std::cout << s;

        if (i == 3) {
            w3.notify_one();
        }

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "finished thread " << id << std::endl;
}

void worker3(int id, int sleep_time, int count) {

    // wait for thread2 to wake it up
    {
        std::unique_lock<std::mutex> lk(m);
        w3.wait(lk);
    }

    std::cout << "Starting Thread" << id << std::endl;
    for (auto i = 1; i <= count; i++) {
        std::string s = "Thread" + std::to_string(id) + " Count " + std::to_string(i) + "\n";
        std::cout << s;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "finished thread " << id << std::endl;
}

int main() {
    std::thread t1{worker1, 1, 1, 10};
    std::thread t2{worker2, 2, 2, 10};
    std::thread t3{worker3, 3, 1, 15};

    // if you don't join all the threads properly, then your program will crash at the end because
    // main function gets over and all threads are still running, so always make sure to join
    // threads if they are joinable.
    if (t1.joinable()) {
        t1.join();
    }
    if (t2.joinable()) {
        t2.join();
    }
    if (t3.joinable()) {
        t3.join();
    }

    return 0;
}
