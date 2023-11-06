import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
public class Q15 implements ActionListener{

    JFrame frame;
    JLabel head;
    JLabel label1;
    JLabel label2;
    JLabel label3;
    JLabel label4;
    JLabel Password;
    JLabel Repassword;
    JLabel label7;
    JLabel label8;
    JLabel label9;
    JTextArea textArea1;
    JTextArea textArea2;
    JTextArea textArea3;
    JPasswordField passwordField;
    JPasswordField repasswordField;
    JButton button;
    JCheckBox checkBox1;
    JCheckBox checkBox2;
    Choice courceChoice;
    Choice branChoice;
    Choice semChoice;

    public Q15(){
        frame = new JFrame("Student Registration Form");
        head = new JLabel("Resgister a new Student");
        label1 = new JLabel("Name :");
        label2 = new JLabel("Gender :");
        label3 = new JLabel("Mail ID :");
        label4 = new JLabel("Mobile No.:");
        Password = new JLabel("Password :");
        Repassword = new JLabel("Repassword :");
        label7 = new JLabel("Courses :");
        label8 = new JLabel("Branch :");
        label9 = new JLabel("Semester :");
        textArea1 = new JTextArea();
        textArea2 = new JTextArea();
        textArea3 = new JTextArea();
        passwordField = new JPasswordField();
        repasswordField = new JPasswordField();
        checkBox1 = new JCheckBox("Male");
        checkBox2 = new JCheckBox("Female");
        button = new JButton("Register");
        courceChoice = new Choice();
        branChoice = new Choice();
        semChoice = new Choice();

        frame.setLayout(null);
        
        frame.setSize(400,400);
        head.setBounds(20, 0, 200, 20);
        label1.setBounds(20, 20, 80, 20);
        textArea1.setBounds(80, 20, 250, 20);
        label2.setBounds(20, 50, 80, 20);
        checkBox1.setBounds(80, 50, 80, 20);
        checkBox2.setBounds(170, 50, 100, 20);
        label3.setBounds(20, 80, 80, 20);
        textArea2.setBounds(100, 80, 250, 20);
        label4.setBounds(20, 110, 80, 20);
        textArea3.setBounds(100, 110, 250, 20);
        Password.setBounds(20, 140, 80, 20);
        passwordField.setBounds(100, 140, 250, 20);
        Repassword.setBounds(20, 170, 80, 20);
        repasswordField.setBounds(100, 170, 250, 20);
        label7.setBounds(20, 200, 80, 20);
        courceChoice.setBounds(100,200,200,20);
        label8.setBounds(20, 230, 80, 20);
        branChoice.setBounds(100, 230, 200, 20);
        label9.setBounds(20, 260, 80, 20);
        semChoice.setBounds(100, 260, 200, 20);
        button.setBounds(100, 290, 200, 20);
        
        
        courceChoice.add("ME/M Tech");
        courceChoice.add("BE/B Tech");
        courceChoice.add("PhD/ Doctorate");

        branChoice.add("Computer Science & Engineering");
        branChoice.add("Information Technology");
        branChoice.add("Artifical Intelligence & Data Science");
        branChoice.add("Electronics & TeleCommunication");


        semChoice.add("I");
        semChoice.add("II");
        semChoice.add("III");

        passwordField.setEchoChar('*');
        repasswordField.setEchoChar('*');

        
        frame.add(head);
        frame.add(label1);
        frame.add(textArea1);
        frame.add(label2);
        frame.add(checkBox1);
        frame.add(checkBox2);
        frame.add(label3);
        frame.add(textArea2);
        frame.add(label4);
        frame.add(textArea3);
        frame.add(Password);
        frame.add(passwordField);
        frame.add(Repassword);
        frame.add(repasswordField);
        frame.add(label7);
        frame.add(courceChoice);
        frame.add(label8);
        frame.add(branChoice);
        frame.add(label9);
        frame.add(semChoice);
        frame.add(button);
        // semChoice.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setResizable(false);
        frame.setVisible(true);
    }



    @Override
    public void actionPerformed(ActionEvent e){

    }

    public static void main(String[] args) {
        Q15 form = new Q15();
    }
}
