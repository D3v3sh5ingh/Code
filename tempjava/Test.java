
package tempjava;

public class Test extends Thread {

	@Override
	public void run() {// running
		System.out.println(Thread.currentThread());
		Thread.currentThread().setName("slept");
		Thread.currentThread().setPriority(5);
		System.out.println(Thread.currentThread());
		for (int i = 0; i < 10; i++)
			System.out.println("child thread");// 5,THREAD-0

	}

	public static void main(String[] args) {
		System.out.println(Thread.currentThread());
		Thread.currentThread().setName("sleeping");
		Thread.currentThread().setPriority(10);
		System.out.println(Thread.currentThread());
		// start instance Thread
		Test test = new Test();// new state
		test.start();// runnable
		for (int i = 0; i < 10; i++)
			System.out.println("main thread ");// 1-10 5 ,NAME --MAIN ,STATIC currentThread()
	}

}
