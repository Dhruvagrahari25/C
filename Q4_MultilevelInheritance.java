import java.util.*;


class student{
        int rollno;
        void putRoll(int n){
            this.rollno = n;
        }
    }

    class Marks extends student{
        int marks;
        void putMarks(int m){
            this.marks = m;
        }
    }

    class sports extends Marks {
        int score;
        void putScore(int s){
            this.score = s;
        }
    }


    public class Q4_MultilevelInheritance {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            
            sports sp = new sports();
            
            System.out.printf("Enter Roll no.:");
            int rollno=sc.nextInt();
            sp.putRoll(rollno);
            
            System.out.printf("Enter Marks:");
        int marks=sc.nextInt();
        sp.putRoll(marks);

        System.out.printf("Enter Score:");
        int score=sc.nextInt();
        sp.putRoll(score);

        System.out.printf("Roll No=%d \nMarks=%d \nScore=%d",rollno,marks,score);
        sc.close();
    }
}
