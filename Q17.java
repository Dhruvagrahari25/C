/*
Write a Java program that creates a bank account with concurrent deposits and 
withdrawals using threads
 */
class Bank extends Thread{

    @Override
    public void run(){
        double limit = Math.random();
        Math.ceil(limit);
        limit*=10;
        for(int i=0; i<limit; i++){
            if ((Math.floor((Math.random())*10)%2)==0) {
                System.out.println(Math.floor((Math.random()*1000))+" Deposited");
            } else {
                System.out.println(Math.floor((Math.random()*1000))+" Withdrawn");
            }
            try {
                Thread.sleep(1000);
            } catch (Exception e) {}
            System.out.println("");
        }
    }
}
    public class Q17{
    public static void main(String[] args) {
        Bank multipleUserBank = new Bank();
        Bank multipleUserBank2 = new Bank();
        Bank multipleUserBank3 = new Bank();
        multipleUserBank.start();
        multipleUserBank2.start();
        multipleUserBank3.start();
    }    
}
