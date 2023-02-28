import java.util.Scanner;

public class StringPalindrome 
{
    public static void main(String[] args) 
    {
        boolean check = true;

        Scanner sc = new Scanner(System.in);
        System.out.print("\n>> Enter your string: ");
        String line = sc.nextLine();

        int i = 0;
        int j = line.length()-1;

        checking:
        while(i<j)
        {
            if(line.charAt(i) != line.charAt(j))
            {
                check = false;
                break checking;
            }
            i++;
            j--;
        }

        if(check == true)
        {
            System.out.print("\n>> "+line+" is a palindrome...");
        }
        else
        {
            System.out.print("\n>> "+line+" is not a palindrome..!!");
        }
    }
}
