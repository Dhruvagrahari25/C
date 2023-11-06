// import java.util.*;

class Members {
    String Name, Address, phone;
    double age, Salary;

    void printSalary() {
        System.out.println(Name+"'s "+"Salary=" + Salary);
    }

    public Members(String Name, String Address, double age, String phone, int Salary) {
        this.Name = Name;
        this.Address = Address;
        this.age = age;
        this.phone = phone;
        this.Salary = Salary;
    }

    
}

class Employee extends Members {
    String Specialization;

    public Employee(String Name, String Address, double age, String phone, int Salary){
        super(Name, Address, age, phone, Salary);
        // this.Specialization = Specialization;
    }
}

class Manager extends Members{
    String Department;
    
    public Manager(String Name, String Address, double age, String phone, int Salary){
        super(Name, Address, age, phone, Salary);
        // this.Department=Department;
    }
}

public class Q7 {
    public static void main(String[] args) {
        Employee e1 = new Employee("dhruv", "Mumbai", 19, "9167845623", 121);
        Manager m1 = new Manager("Someone", "Pune", 22, "9150425623", 101);

        e1.printSalary();
        m1.printSalary();
    }
}