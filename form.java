import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class form implements ActionListener{
    JFrame frame;
    JPanel panel;
    JLabel label,label1,label2,label3,label4;
    JTextField textField,textField1,textField2,textField3,textField4;
    JButton register, exit;
    JCheckBox checkBox1, checkBox2;
    String name, address, birthday, job, gender;
    form(){
        frame = new JFrame();
        panel = new JPanel();
        label = new JLabel();
        label1 = new JLabel();
        label2 = new JLabel();
        label3 = new JLabel();
        label4 = new JLabel();
        register = new JButton("Register");
        exit = new JButton("Exit");
        textField = new JTextField();
        textField1 = new JTextField();
        textField2 = new JTextField();
        textField3 = new JTextField();
        textField4 = new JTextField();
        checkBox1 = new JCheckBox();
        checkBox2 = new JCheckBox();
        
        frame.setSize(400, 500);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        // frame.add(panel);
        frame.setResizable(true);

        label.setText("Name :");
        label.setBounds(10, 10, 100, 20);
        label1.setText("Address :");
        label1.setBounds(10, 40, 100, 20);
        label2.setText("Birthday :");
        label2.setBounds(10, 70, 100, 20);
        label3.setText("Gender :");
        label3.setBounds(10, 100, 100, 20);
        label4.setText("Job :");
        label4.setBounds(10, 130, 100, 20);

        textField.setBounds(80, 10, 100, 20);
        textField1.setBounds(80, 40, 100, 20);
        textField2.setBounds(80, 70, 100, 20);
        textField3.setBounds(80, 100, 100, 20);
        textField4.setBounds(80, 130, 100, 20);

        // checkBox1.setBounds(80, 130, 20, 20);
        // checkBox2.setBounds(110, 130, 20, 20);

        register.setBounds(10, 10, 100, 20);
        exit.setBounds(120, 10, 100, 20);
        register.addActionListener(this);
        exit.setBounds(220, 10, 100, 20);
        exit.addActionListener(this);

    
        frame.add(label);
        frame.add(label1);
        frame.add(label2);
        frame.add(label3);
        frame.add(label4);
        frame.add(textField);
        frame.add(textField1);
        frame.add(textField2);
        frame.add(textField3);
        frame.add(textField4);
        frame.add(checkBox1);
        frame.add(checkBox2);
        frame.add(register);
        frame.add(exit);

        frame.setVisible(true);
    }
    public static void main(String[] args) {
        form registrationForm = new form();
    }
    @Override
    public void actionPerformed(ActionEvent e){
        if (e.getSource() == exit) {
            System.exit(0);
        }else if (e.getSource() == register) {
            name = textField.getText();
            address = textField1.getText();
            birthday = textField2.getText();
        }
    }
}
