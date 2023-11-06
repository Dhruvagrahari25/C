class Multithreading implements Runnable{

    private int ThreadNumber;
    public Multithreading(int ThreadNumber){
        this.ThreadNumber=ThreadNumber;
    }


    @Override
    public void run(){
        for(int i=0; i<5; i++){
            System.out.println("value "+i+" from thread "+ThreadNumber);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                System.out.println("An error occured!!");
            }
        }
    }
}

public class Q13 {
    public static void main(String[] args) {

        Multithreading dThread1 = new Multithreading(1);
        Multithreading dThread2 = new Multithreading(2);
        Thread mydThread1 = new Thread(dThread1);
        Thread mydThread2 = new Thread(dThread2);

        mydThread1.setPriority(5);
        mydThread2.setPriority(7);

        mydThread1.start();
        mydThread2.start();
    }
}