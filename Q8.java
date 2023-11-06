import java.util.Scanner;

public class Q8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] matrix1 = new int[3][3];
        int[][] matrix2 = new int[3][3];
        System.out.println("Enter elements of Matrix 1:");
        for (int j = 0; j < 3; j++) {
            for (int i = 0; i < 3; i++) {
                matrix1[i][j] = sc.nextInt();
            }
        }
        System.out.println("Enter elements of Matrix 2:");
        for (int j = 0; j < 3; j++) {
            for (int i = 0; i < 3; i++) {
                matrix2[i][j] = sc.nextInt();
            }
        }

        System.out.println("Choose an operation:");
        System.out.printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Exit\n");
        int choice = sc.nextInt();
        int[][] result = new int[3][3];
        switch (choice) {
            case 1:
                for (int j = 0; j < 3; j++) {
                    for (int i = 0; i < 3; i++) {
                        result[i][j] = matrix1[i][j] + matrix2[i][j];
                    }
                }
                for (int j = 0; j < 3; j++) {
                for (int i = 0; i < 3; i++) {
                        System.out.printf("%d\t", result[i][j]);
                    }
                    System.out.println("");
                }
                break;
            case 2:
                for (int j = 0; j < 3; j++) {
                    for (int i = 0; i < 3; i++) {
                        result[i][j] = matrix1[i][j] - matrix2[i][j];
                    }
                }
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        System.out.printf("%d\t", result[i][j]);
                    }
                    System.out.println("");
                }
                break;
            case 3:
            for (int j = 0; j < 3; j++) {
            for (int i = 0; i < 3; i++) {
                        for (int k = 0; k < 3; k++) {
                            result[i][j] += matrix1[i][k] * matrix2[k][j];
                        }
                    }
                }
                for (int j = 0; j < 3; j++) {
                for (int i = 0; i < 3; i++) {
                        System.out.printf("%d\t", result[i][j]);
                    }
                    System.out.println("");
                }
                break;

            default:
            System.out.println("Invalid choice!");
                break;
        }
        sc.close();
    }
}
