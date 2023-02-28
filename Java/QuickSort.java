import java.util.*;

class QuickSort 
{
    String words[];
    int length;

    void input() 
    {
        int j = 0;

        Scanner sc = new Scanner(System.in);
        System.out.print("\nEnter number of strings: ");
        length = sc.nextInt();
        this.words = new String[length];
        
        while (length > j) 
        {
            System.out.print("\n" + (j + 1) + "th String: ");
            words[j] = sc.next();
            j++;
        }
        sort(0, length - 1);
    }

    void sort(int l, int h) 
    {
        int higher = h;
        int lower = l;
        String pivot = words[lower + (higher - lower) / 2];
        while (lower <= higher) 
        {

            while (words[lower].compareToIgnoreCase(pivot) < 0) 
            {
                lower++;
            }
            while (words[higher].compareToIgnoreCase(pivot) > 0) 
            {
                higher--;
            }
            if (lower <= higher) 
            {
                swap(higher, lower);
                lower++;
                higher--;
            }
        }
        if (l < higher) 
        {
            sort(l, higher);
        }
        if (lower < h) 
        {
            sort(lower, h);
        }
    }

    void swap(int higher, int lower) 
    {
        String temp = words[lower];
        words[lower] = words[higher];
        words[higher] = temp;
    }

    void display() 
    {
        System.out.print("\nSorted names are: \n");

        for (String c : words) 
        {
            System.out.print("\n" + c);
        }
    }

    public static void main(String[] args)
    {
        Scanner s =new Scanner(System.in);
        QuickSort st = new QuickSort();
        int option =0;

        do
        {
            System.out.print("\n\n1.Enter Strings\n2.Sort and Display\n3.Exit\n\n>> Enter your choice: ");
            option = s.nextInt();

            switch(option)
            {
                case 1: st.input();
                break;
                case 2: st.display();
                break;
                case 3: System.out.print("\n Exiting Program..!");
                break;
                default: System.out.print("\n Invalid Entry\n Try again..!");
            }
        }while(option != 3);
    }
}