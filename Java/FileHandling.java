import java.util.Scanner;
import java.io.*;

class FileHandling
{
	public static void main(String[] args)throws IOException
	{
		FileWriter fw = null;
		FileReader fr = null;
		Scanner sc = null;
		int count = 0;
			
		try
		{
			sc = new Scanner(System.in);
			
			System.out.print("\nEnter the String to be entered into the file : ");
			String s = sc.nextLine();
			
			fw = new FileWriter("input.txt");
			fw.write(s);
		}
		catch(IOException e)
		{
			System.out.print("\nError in writing to the file");
		}
		finally
		{
			fw.close();
		}
		
		try
		{
			int i,ch;
			sc = new Scanner(System.in);
			
			fr = new FileReader("input.txt");
			ch = fr.read();
			
			System.out.print("\nEnter the character to be counted : ");
			char a = sc.next().charAt(0);
			while((ch =fr.read())!=-1)
			{
				if(ch==a)
				{
					count++;
				}
			}
		}
		catch(IOException e)
		{
			System.out.print("\nError in writing to the file");		
		}
		finally
		{
			fr.close();
		}
		
		try
		{
			sc = new Scanner(System.in);
			int ch;
			
			fr = new FileReader("input.txt");
			fw = new FileWriter("output.txt");
			
			while((ch=fr.read())!=-1)
			{
				fw.write(ch);	
			}
			
			
			if(count != 0)
			{
				fw.write("\nThe number of characters is "+count+"\n");
			}
			else
			{
				fw.write("\nThe character was not found!\n");
			} 

			if(count != 0)
			{
				System.out.print("\nThe number of characters is : "+count+"\n");
			}
			else
			{
				System.out.print("\nThe specified character was not found in the file.\n");
			}
		}
		catch(FileNotFoundException e)
		{
			System.out.print("\nError in writing to the file");		
		}
		catch(IOException e)
		{
			System.out.print("\nError in writing to the file");		
		}
		finally
		{
			fr.close();
			fw.close();
		}
	}
}
