
package tempjava;

public class test1 extends Thread {

    @Override
	public void run() {//running
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

		Test test = new Test();//new state 
		test.start();// runnable 
		try {
			test.join();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
