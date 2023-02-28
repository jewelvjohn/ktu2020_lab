import java.awt.*;
import javax.swing.*;

public class Window
{
    public static void createWindow()
    {
        JFrame frame = new JFrame("Simple GUI");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel textLabel = new JLabel("> This is a Label", SwingConstants.CENTER);
        textLabel.setPreferredSize(new Dimension(300,100));

        frame.getContentPane().add(textLabel, BorderLayout.CENTER);

        frame.setLocationRelativeTo(null);
        frame.pack();
        frame.setVisible(true);
    }
}
