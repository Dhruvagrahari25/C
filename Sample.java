
/*Create a Shape interface having methods area ()
and perimeter (). Create 2 subclasses, Circle and
Rectangle that implement the Shape interface. Create a
class Sample with main method and demonstrate the
area and perimeters of both the shape classes. You need
to handle the values of length, breath, and radius in
respective classes to calculate their area and perimeter.
 */
import java.util.*;



interface Shape {
    double Area();
        double perimeter();
    }

    class Circle implements Shape {
        double radius;
        Circle(double radius){
            this.radius=radius;
        }
        public double Area(){
            return Math.PI*radius*radius;
        }
        public double perimeter(){
            return Math.PI*2*radius;
        }
    }

    class Rectangle implements Shape{
        double length, breath;
        Rectangle(double length, double breath){
            this.length=length;
            this.breath=breath;
        }
        public double Area(){
            return length*breath;
        }
        public double perimeter(){
            return 2*(length+breath);
        }
    }


    public class Sample {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            System.out.printf("Enter radius:");
            double radius = sc.nextDouble();
            Circle c = new Circle(radius);
            System.out.printf("Area of the Circle=%f & Perimeter=%f",c.Area(),c.perimeter());
            
            System.out.printf("Enter length and breadth:");
            double length = sc.nextDouble();
            double breadth = sc.nextDouble();
            Rectangle r = new Rectangle(length,breadth);
            System.out.printf("Area of the Rectangle=%f & Perimeter=%f",r.Area(),r.perimeter());
            sc.close();
        }
    }