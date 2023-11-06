// import java.util.*;
// public class Main{
// 	public static void main(String []args){
// 	Scanner sc = new Scanner(System.in);
// 	System.out.println("Enter no. of Employees: ");
// 	Employee []e= new Employee[sc.nextInt()];
// 	Employee.input(e,sc);
// 	Employee.display(e);
// 	sc.close();
// 	}
// }
// class Employee{
// 	private String name;
// 	private int yearOfJoining;
// 	private double salary;
// 	private String address;
	

// 	public Employee(String name, int yearOfJoining, double salary, String address){
// 		this.name=name;
// 		this.yearOfJoining=yearOfJoining;
// 		this.salary=salary;
// 		this.address=address;
// 	}
// 	public Employee(){
// 	}

// 	{
// 		name="Anonymous";
// 		yearOfJoining=0;
// 		salary=0;
// 		address="Unknown";

// 	}
// 	public static void input(Employee e[], Scanner sc){
		
// 		for(int i=0;i<e.length;i++){
// 			try{
			
// 			System.out.println("Enter Your Name: ");
// 			String name=sc.nextLine();
// 			sc.next();
// 			System.out.println("Enter Year Of Joining: ");
// 			int yearOfJoining=sc.nextInt();
// 			System.out.println("Enter Your Salary: ");
// 			double salary=sc.nextDouble();
// 			System.out.println("Enter Your Address: ");
// 			String address=sc.nextLine();
// 			sc.next();
// 			if(yearOfJoining>2023&&yearOfJoining<1950)
// 				throw new IllegalArgumentException("Year of Joining must be greater than 1950 and less than 2023");
// 			if(salary<0)
// 				throw new IllegalArgumentException("salary cannot be less than zero");
// 			e[i]=new Employee(name, yearOfJoining,salary,address);
// 			}
// 			catch(Exception ex){
// 				System.out.println("Error: "+ex.getMessage());
// 				e[i]=new Employee();
// 			}
// 		}
// 	}
	
// 	public static void display(Employee e[]){
// 		System.out.println("Name	year of Joining		Address");
// 		for(int i=0;i<e.length;i++){
// 			System.out.println(e[i].name+"		"+e[i].yearOfJoining+"		"+e[i].address);
// 		}
// 	}
// }




import java.util.*;
public class Main{
	public static void main(String []args){
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter no. of Employees: ");
	Employee []e= new Employee[sc.nextInt()];
	sc.nextLine(); // consume newline
	Employee.input(e,sc);
	Employee.display(e);
	sc.close();
	}
}
class Employee{
	private String name;
	private int yearOfJoining;
	private double salary;
	private String address;
	
	public Employee(String name, int yearOfJoining, double salary, String address){
		this.name=name;
		this.yearOfJoining=yearOfJoining;
		this.salary=salary;
		this.address=address;
	}
	public Employee(){
		name="Anonymous";
		yearOfJoining=0;
		salary=0;
		address="Unknown";
	}
	public static void input(Employee e[], Scanner sc){
		for(int i=0;i<e.length;i++){
			try{
				System.out.println("Enter Your Name: ");
				String name=sc.nextLine();
				System.out.println("Enter Year Of Joining: ");
				int yearOfJoining=sc.nextInt();
				sc.nextLine(); // consume newline
				System.out.println("Enter Your Salary: ");
				double salary=sc.nextDouble();
				sc.nextLine(); // consume newline
				System.out.println("Enter Your Address: ");
				String address=sc.nextLine();
				if(yearOfJoining > 2023 || yearOfJoining < 1950)
					throw new IllegalArgumentException("Year of Joining must be greater than 1950 and less than 2023");
				if(salary < 0)
					throw new IllegalArgumentException("Salary cannot be less than zero");
				e[i]=new Employee(name, yearOfJoining,salary,address);
			}
			catch(Exception ex){
				System.out.println("Error: "+ex.getMessage());
				e[i]=new Employee();
			}
		}
	}
	
	public static void display(Employee e[]){
		System.out.println("Name	year of Joining		Address");
		for(int i=0;i<e.length;i++){
			System.out.println(e[i].name+"		"+e[i].yearOfJoining+"		"+e[i].address);
		}
	}
}
