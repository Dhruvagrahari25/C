import java.util.*;

public class Q9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your full name:");
        String name = sc.nextLine();
        name = name.toUpperCase();
        String[] words = name.split(" ");
        for (int i = 0; i < words.length - 1; i++) {
            String word = words[i];
            System.out.printf("%c.", word.charAt(0));
        }
        System.out.println(" " + words[words.length - 1]);
        sc.close();
    }
}
