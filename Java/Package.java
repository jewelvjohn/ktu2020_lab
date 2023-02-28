package pk1.pk2;

import pk1.Sort;
import java.util.Scanner;

public class Package
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Sort srt = new Sort();
        int[] array = new int[20];
        int[] sorted = new int[20];
        int i;

        System.out.print("\nEnter the length array : ");
        int length = sc.nextInt();

        System.out.print("\nEnter the array : ");
        for(i=0; i<length; i++)
        {
            System.out.print("\n\t"+i+"th Element : ");
            array[i] = sc.nextInt();
        }
        sorted = srt.sort(array);

        System.out.print("\nSorted array is : ");
        for(i=0; i<length; i++)
        {
            System.out.print("\n\t"+i+"th ELement : "+sorted[i]);
        }
    }
}
