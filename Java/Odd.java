import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Odd extends JFrame implements ActionListener 
{
    JTextField inputBox;
    JTextField outputBox;

    JButton bPlus;

    public Odd() 
    {
        JFrame frame = new JFrame("Calculator"); 
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
        GridBagLayout layout = new GridBagLayout(); 
        GridBagConstraints gbc = new GridBagConstraints();

        frame.setLayout (layout);
        frame.setSize(300,350);
        frame.setVisible (true);

        inputBox = new JTextField(10);
        inputBox.setEditable (true);

        outputBox = new JTextField(10);
        outputBox.setEditable (false);
    }

    public void actionPerformed (ActionEvent ae) 
    { 
        String temp = ae.getActionCommand();

        if(temp !="+" && temp !="-" && temp !="x" && temp !="=" && temp !="/" && temp !="C") 
        {
            inputBox.setText (inputBox.getText()+temp);
        }

        if(temp=="+" || temp=="-" || temp=="x" || temp=="/" || temp=="C")
        {

            if(temp!="C")
            {
                l = inputBox.getText().length(); 
                System.out.println(l);
                val1 = Double.parseDouble (inputBox.getText());
                operator = temp;
                inputBox.setText (inputBox.getText() + temp);
            }
            else
            {
                inputBox.setText("");
                operator="";
                l=0;
            }
        }

        if(temp=="=")
        {
            val2=Double.parseDouble (inputBox.getText().substring(l+1));
        }
    }

    public static void main(String[] args) 
    {
        SwingUtilities.invokeLater(new Runnable() 
        {
            public void run() 
            {
                new Odd();
            }
        });
    }
}
