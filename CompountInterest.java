import java.util.Scanner;

public class CompountInterest {
    public static double CompountInterest(float intrest_rate, double principal_amt, int period ){
        System.out.println("Amount Invested:"+(principal_amt));
        for(int i=0; i<period; i++){
            principal_amt+=((intrest_rate/100)*principal_amt);
        }
        return principal_amt;
    }
    public static double SIP(float intrest_rate, double principal_amt, int period){
        period*=12;
        intrest_rate/=100;
        intrest_rate/=12;
        System.out.println("Amount Invested:"+(principal_amt*period));
        principal_amt=principal_amt*(((Math.pow((1+(intrest_rate)), period)) - 1)/(intrest_rate))*(1+(intrest_rate));
        return principal_amt;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter principal amount:");
        double principal_amt=sc.nextDouble();
        System.out.printf("Enter interest rate:");
        float intrest_rate = sc.nextFloat();
        System.out.printf("Enter period:");
        int period = sc.nextInt();
        System.out.println();
        System.out.printf("FD returns in %d yrs. = %f Rs.\n",period,CompountInterest(intrest_rate,principal_amt,period));
        System.out.printf("SIP returns in %d yrs. = %f Rs.\n",period,SIP(intrest_rate, principal_amt, period));
        sc.close();
    }
}
