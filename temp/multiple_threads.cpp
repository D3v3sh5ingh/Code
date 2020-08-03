#include <iostream>
#include <thread>
#include <vector>
#include <chrono>    // for sleep
#include <array>

void worker(int id, int sleep_time, int count) {
    std::cout << "starting Thread" << id;
    std::cout << " : my work is to count upto " << count;
    std::cout << " with sleep interval of " << sleep_time << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(sleep_time));

    for (auto i = 1; i <= count; i++) {
        // std::string s = "Thread" + std::to_string(id) + " Count " + std::to_string(i) + "\n";
        // // I made the string then printed it in one go
        // std::cout << s;

        // if you do following the output may get scrambled. Try following after uncommenting it
        std::cout << "Thread" << id << " Count " << i << std::endl;

        // sleep for given time
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "finished thread " << id << std::endl;
}

int main() {
    static const int num_threads = 3;
    std::vector<std::thread> threads(num_threads);
    std::array<int, num_threads> sleep_time{1, 2, 1};
    std::array<int, num_threads> counts{10, 5, 15};

    for (auto i = 0; i < num_threads; i++) {
        threads.emplace_back(worker, i + 1, sleep_time[i], counts[i]);
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    for (auto &th : threads) {
        if (th.joinable()) {
            th.join();
        }
    }
    return 0;
}
