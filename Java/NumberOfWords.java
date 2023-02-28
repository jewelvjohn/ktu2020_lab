import java.util.*;

public class Words
{
    int i;
    System.out.print("\nEnter the String : ");
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();

    StringTokenizer st = new StringTokenizer(s," ");

    while(st.hasMoreTokens())
    {
        String word = st.nextToken();
        char c      = word.charAt(0);
        char a      = Character.toUpperCase(c);
         = a;
        System.out.print(word+" ");
    }
}