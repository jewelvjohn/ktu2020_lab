import java.util.Scanner;

class Multiples
{
    synchronized static void printTable(int n)
    {
        System.out.println(Thread.currentThread().getName());
        for(int i=1;i<=10;i++)
        {
            System.out.println("\n"+i+" * "+n+" = "+n*i);
            try 
            {
                Thread.sleep(200);
            } 
            catch (Exception e) 
            {
                System.out.println("Exception found : "+e);
            }
        }
    }
}

class One extends Thread
{
    int n;
    public One(int n)
    {
     this.n=n;
    }

    public void run()
    {
        Thread.currentThread().setName("\nMultiplication table of " + n + " is :");
        Multiples.printTable(n);
    }
}

class Two extends Thread
{
    int n;
    public Two(int n)
    {
     this.n=n;
    }
    public void run()
    {
        Thread.currentThread().setName("Multiplication table of " + n + " is :");
        Multiples.printTable(n);
    }
}
public class MultiThread
{
    public static void main(String[] args) 
    {
	    Scanner sc=new Scanner(System.in);
	    System.out.print("\nEnter two numbers : ");
	    int a=sc.nextInt();
	    int b=sc.nextInt();
    
        One t1 = new One(a);
        Two t2 = new Two(b);
        t1.start();
        t2.start();
    }
}
