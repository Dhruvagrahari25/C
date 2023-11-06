/* 
Write a Java program to perform employee
payroll processing using packages. In the java file,
Emp.java creates a package employee and creates a
class Emp. Declare the variables name,empid, category,
bpay, hra, da, npay, pf, grosspay, incometax, and
allowance. Calculate the values in methods. Create
another java file Emppay.java. Create an object e to call
the methods to perform and print values.
 */
// import java.util.*;
// package employee;
public class Emp {
    String name,empid,category;
    double bpay, hra, da, npay, pf, grosspay, incometax, allowance, DA_rate, hourly_rate, hours_worked, salary;

    public Emp(double bpay, double hra , double da, double npay,double pf,double grosspay,double incometax,double allowance,double DA_rate,double hourly_rate, double hours_worked, double salary){
        this.bpay=bpay;
        this.hra=hra;
        this.da=da;
        this.npay=npay;
        this.pf=pf;
        this.grosspay=grosspay;
        this.incometax=incometax;
        this.allowance=allowance;
        this.DA_rate=DA_rate;
        this.hourly_rate=hourly_rate;
    }

    // //House rent allowance
    // double hra(double salary){
    //     return hra=salary*0.5;
    // }
    // //Base pay
    // double bpay(double hourly_rate, double hours_worked){
    //     return bpay= hourly_rate*hours_worked;
    // }

    // //Dearness Allowance
    // double da(double DA_rate){
    //     return da=bpay(hourly_rate,hours_worked)*DA_rate;
    // }

    // //Net pay
    // double npay(double grosspay){
    //     return npay=grosspay(hourly_rate, hours_worked)-allowance;
    // }

    // double grosspay(double hourly_rate, double hours_worked){
    //     return grosspay=hourly_rate*hours_worked;
    // }

    // double incometax(int salary){
    //     if (salary<=500000) {
    //         return incometax=salary*0.3;
    //     }else{
    //         return incometax=salary*0.5;
    //     }
    // }

    // double allowance(){
    //     return allowance=hra(salary)+da(DA_rate);
    // }

}
