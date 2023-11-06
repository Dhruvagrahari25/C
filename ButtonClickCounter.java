// import javax.swing.*;
// import java.awt.*;
// import java.awt.color.*;
// import java.awt.event.ActionEvent;
// import java.awt.event.ActionListener;

// public class AWT implements ActionListener{
//     public int i=0;
//     JFrame frame;
//     JPanel panel;
//     JTextArea textArea;
//     JButton button;

//     AWT() {
//         frame = new JFrame("Dhruv Agrahari");
//         panel = new JPanel();
//         textArea = new JTextArea();
//         button = new JButton("Click me!");

//         panel.setBounds(100, 100, 100, 100);
//         panel.setLayout(null);
//         panel.setVisible(true);
//         panel.setBackground(Color.GREEN);

//         textArea.setBounds(50, 50, 200, 40);
//         textArea.setEditable(true);
//         textArea.setFont(new Font("Serif", Font.PLAIN, 20));

//         frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//         frame.setSize(500, 500);
//         frame.setResizable(false);
        
//         button.setBounds(200, 200, 120, 60);
//         panel.add(textArea);
//         panel.add(button);
        
//         frame.add(panel);
//         frame.setVisible(true);

//     }
//     public static void main(String[] args) {
//         AWT window = new AWT();
//     }
//     @Override
//     public void actionPerformed(ActionEvent e){
//         if (e.getSource() == button) {
//             textArea.setText("Button Clicked!!x"+(i+1));
//             i++;
//             panel.setBackground(Color.BLACK);
//             if (i%2==0) {
//                 panel.setBackground(Color.WHITE);
//             }
//         }
//     }
// }



import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class ButtonClickCounter implements ActionListener {
    private int clickCount = 0;
    private JFrame frame;
    private JPanel panel;
    private JTextArea textArea;
    private JButton button;

    public ButtonClickCounter() {
        frame = new JFrame("Button Click Counter");
        panel = new JPanel();
        textArea = new JTextArea();
        button = new JButton("Click me!");

        panel.setLayout(null);
        panel.setBackground(Color.BLACK);

        textArea.setBounds(10, 10, 200, 40);
        textArea.setEditable(false);
        textArea.setFont(new Font("Serif", Font.PLAIN, 20));

        button.setBounds(10, 60, 120, 30);
        button.addActionListener(this);

        frame.add(panel);
        panel.add(textArea);
        panel.add(button);

        frame.setSize(300, 150);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == button) {
            clickCount++;
            textArea.setText("Button clicked!!x" + clickCount);
            if (clickCount % 2 == 0) {
                panel.setBackground(Color.WHITE);
            } else {
                panel.setBackground(Color.BLACK);
            }
        }
    }

    public static void main(String[] args) {
        ButtonClickCounter win = new ButtonClickCounter();
    }
}
