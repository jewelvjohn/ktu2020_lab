import java.io.*;
import java.util.Scanner;

public class WriteFile
{
    public static void main(String[] args)
    {
        try
        {
            Scanner sc = new Scanner(System.in);
            System.out.print("\nEnter the string to be inputted to the file : ");
            String s = sc.nextLine();

            FileWriter fw = new FileWriter("input.txt");
            fw.write(s);
            fw.close();
            System.out.print("\nWriting Successful : ");
        }
        catch(Exception e) 
        {
            System.out.print("\nIO Execption");
        }
        try
        {
            char[] ch = new char[100];
            
            FileReader fr = new FileReader("input.txt");
            fr.read(ch);
            fr.close();

            String r = new String(ch);

            FileWriter fx = new FileWriter("output.txt");
            fx.write(r);
            fx.close();
            System.out.print("\nWriting Successful : ");
        }
        catch(Exception e) 
        {
            System.out.print("\nIO Execption");
        }
    }
}