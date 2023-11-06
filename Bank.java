/*
Write a program using inheritance to create class called Account as a base 
class, write two derived classes called SavingsAccount and CurrentAccount. 
A SavingsAccount object, in addition to the attributes of an Account object, should 
have an interest variable and a Interest method which adds interest to the account. 
A CurrentAccount should also have an overridden Interest method to calculate 
interest in current account.
*/
import java.util.*;
class Account{
	String AccountNo;
	double balance;
	public Account(String AccountNo, double balance){
		this.AccountNo=AccountNo;
		this.balance=balance;
	}
	public void AccountInfo(){
		System.out.println("Account No.:"+AccountNo);
		System.out.println("Balance:"+balance);
	}
}
class SavingsAccount extends Account{
	private double intrest;
	public SavingsAccount(String AccountNo, double balance, double intrest){
		super(AccountNo, balance);
		this.intrest=intrest;
	}
	public void calculateIntrest(){
		intrest=balance*intrest/100;
		System.out.println("Intrest Added: "+intrest);
	}
	@Override
	public void AccountInfo(){
		super.AccountInfo();
		System.out.println("Account type: Savings Account");
	}
	
}
class CurrentAccount extends Account{
	private double intrest;
	public CurrentAccount(String AccountNo, double balance, double intrest){
		super(AccountNo, balance);
		this.intrest=intrest;
	}
	public void calculateIntrest(){
		intrest=balance*intrest/100;
		System.out.println("Intrest Added: "+intrest);
	}
	@Override
	public void AccountInfo(){
		super.AccountInfo();
		System.out.println("Account type: Current Account");
	}
}
public class Bank{
	public static void main(String[] args){
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter Savings account details:");
		System.out.printf("Enter account No.:");
		String SAccountNo = sc.nextLine();
		
		System.out.printf("Enter balance:");
		double Sbalance = sc.nextDouble();
		
		System.out.printf("Enter intrest rate:");
		double Sintrest = sc.nextDouble();
		System.out.println();
		
		SavingsAccount Sacc = new SavingsAccount(SAccountNo,Sbalance, Sintrest);
		
		
		
		System.out.println("Enter Current account details:");
		System.out.printf("Enter account No.:");
		sc.nextLine();
		String CAccountNo = sc.nextLine();

		System.out.printf("Enter balance:");
		double Cbalance = sc.nextDouble();
		
		System.out.printf("Enter intrest rate:");
		double Cintrest = sc.nextDouble();
		System.out.println();
		
		CurrentAccount Cacc = new CurrentAccount(CAccountNo,Cbalance, Cintrest);

		System.out.println("Savings Account Details");
		Sacc.AccountInfo();
		Sacc.calculateIntrest();
		System.out.println();

		System.out.println("Current Account Details");
		Cacc.AccountInfo();
		Cacc.calculateIntrest();
		System.out.println();
		
		sc.close();
	}
}
