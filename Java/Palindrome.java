import java.util.Scanner;
class Palindrome
{
    public static void main(String[] args)
    {
        int num, rem, alt;
        int rev = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("\nEnter the number : ");
        num = sc.nextInt();
        alt = num;

        while(num > 0)
        {
            rem = num%10;
            rev = rev*10 + rem;
            num = num/10;
        }

        if(alt == rev)
        {
            System.out.print("\nThe entered number is a palindrome\n");
        }
        else
        {
            System.out.print("\nThe entered number was not palindrome\n");
        }
    }
} 