/*Write a program using constructors and methods that would print the 
information (name, year of joining, salary, address) of employees by creating a 
class named 'Employee'. Also add Exceptions for verification of data. The output 
should be as follows:

Name    Year of joining     Address
Sachin      1994            Mumbai
Sam         2000            Chennai
John        1999            Cochin*/
import java.util.*;
public class Employee {
    
    String name, address;
    int year_of_joining;

    /**
     * Input
     */
    public class Input {
    
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter the number of Employees:");
        int n = sc.nextInt();
        sc.nextLine();
        String[] name = new String[n];
        String[] address = new String[n];
        int[] year_of_joining = new int[n];


        for(int i=0; i<n; i++){


            System.out.println("Enter details of Employee "+(i+1)+":");
            System.out.printf("Name:");
            name[i]=sc.nextLine();
            // sc.nextLine();//to consume the newline character

            System.out.printf("Year of joining:");
            year_of_joining[i]=sc.nextInt();
            sc.nextLine();//to consume the newline character


            System.out.printf("Address:");
            address[i]=sc.nextLine();
            // sc.nextLine();//to consume the newline character


            System.out.println("");
        }
        sc.close();
    }
    
    
}