import java.util.Scanner;
import java.io.*;

class Exceptions
{
	public static void main(String[] args) throws ArrayIndexOutOfBoundsException
	{
		
			Scanner sc = new Scanner(System.in);
			float[] array1 = new float[20];
			float[] array2 = new float[20];
			float[] p      = new float[20];
			
			int i;
			int t;
			
			System.out.print("\nEnter the size of the first array : ");
			int m = sc.nextInt();
			System.out.print("\nEnter the size of the Second array : ");
			int n = sc.nextInt();
			
			System.out.print("\nEnter the First Array : \n");
			for(i=0; i<m; i++)
			{
				System.out.print("\n"+(i+1)+" : ");
				array1[i] = sc.nextInt();
			}
			
			System.out.print("\nEnter the Second Array : \n");
			for(i=0; i<n; i++)
			{
				System.out.print("\n"+(i+1)+" : ");
				array2[i] = sc.nextInt();
			}
		try
		{
			if(m>n)
			{
				t = m;
			}
			else
			{
				t = n;
			}
			
			i = 0;
			while(i<t)
			{
				p[i] = array1[i]/array2[i];
				i++;
			}
			

			System.out.print("\nThe resulting array after division is : \n");
			i = 0;
			while(i<t)
			{
				System.out.print("\n"+(i+1)+" . "+p[i]);
				i++;
			}

			System.out.print("\n");
		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			System.out.print("\nArray Out Of Bound Exceptions");
		}
		catch(ArithmeticException e)
		{
			System.out.print("\nArithmetic Exception");
		}
		catch(Exception e)
		{
			System.out.print("\nOther Exceptions");
		}
		finally
		{
			System.out.print("\nOperation Succesful");
		}
	}
}
