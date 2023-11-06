/*Write a program to print the area of a rectangle by creating a class named 
'Area' taking the values of its length and breadth as parameters of its constructor 
and having a method named 'returnArea' which returns the area of the rectangle. 
Length and breadth of rectangle are entered through keyboard.*/ 
import java.util.*;
public class Q2_Area {
    int length,breadth;

    //Constructor-->to initialize variables as objects (objectify)
    public Q2_Area(int length, int breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public int returnArea(int length, int breadth){
        return length*breadth;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter Length:");
        int length = sc.nextInt();
        System.out.printf("Enter Breadth:");
        int breadth = sc.nextInt();

        Q2_Area area = new Q2_Area(length, breadth);
        System.out.println("Area="+area.returnArea(length, breadth));
        sc.close();
    }
    
}
