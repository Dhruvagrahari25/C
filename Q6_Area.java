import java.util.Scanner;

public class Q6_Area {
    public static int Area(int length, int breadth){
        return length*breadth;
    }
    public static int Area(int side){
        return side*side;
    }
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        System.out.printf("Which shape do you want to find the area of?:\n1.Square\n2.Rectangle\n");
        int shape=sc.nextInt();
        switch (shape) {
            case 1:
                System.out.printf("Enter the side of a square:");
                int side = sc.nextInt();
                System.out.println("Area="+Area(side));
                break;

            case 2:
                System.out.printf("Enter the dimensions of a rectangle:");
                int length = sc.nextInt();
                int breadth = sc.nextInt();
                System.out.println("Area="+Area(length,breadth));
                break;
        
            default:
                System.out.println("Invalid option!");
                break;
        }
        sc.close();
    }
}
