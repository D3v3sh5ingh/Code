package tempjava;

public class test2 extends Thread {
    @Override
    public void run() {// running
        System.out.println(Thread.currentThread());
        for (int i = 0; i < 10; i++) {
            try {
                Thread.sleep(2000);
            } catch (InterruptedException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
            System.out.println("child thread");
        }
    }

    public static void main(String[] args) {
        System.out.println(Thread.currentThread());
        Thread.currentThread().setPriority(8);
        System.out.println(Thread.currentThread());
        Test test = new Test();// new state
        test.start();// runnable
        try {
            test.join();
        } catch (InterruptedException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        for (int i = 0; i < 10; i++) {
            System.out.println("main thread ");
        }
    }
}
