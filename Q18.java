/*Write a Java program to create a class called Shape
with methods called getPerimeter() and getArea().
Create a subclass called Circle that overrides the
getPerimeter() and getArea() methods to calculate the
area and perimeter of a circle */

import java.util.Scanner;

abstract class Shape {
    abstract double getPerimeter();

    abstract double getArea();

}

class Circle extends Shape {
    int radius;

    Circle(int radius) {
        this.radius = radius;
    }

    @Override
    public double getPerimeter() {
        return 2 * Math.PI * radius;
    }

    @Override
    public double getArea() {
        return Math.PI * radius * radius;
    }
}

public class Q18 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter radius:");
        int radius = sc.nextInt();
        Circle crc = new Circle(radius);
        System.out.println("Area of circle=" + crc.getArea());
        System.out.println("Perimeter of circle=" + crc.getPerimeter());
        sc.close();
    }
}
