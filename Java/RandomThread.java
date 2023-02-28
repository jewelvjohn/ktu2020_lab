import java.util.Random;

class Square extends Thread 
{
    int x;

    Square(int a) 
    {
        this.x = a;
    }

    public void run() 
    {
        try 
        {
            int sq = (x * x);
            System.out.println("\n"+x + " is even");
            System.out.println("\nSquare of " + x + " is " + sq);
            Thread.sleep(200);

        } 
        catch(InterruptedException e) 
        {
            System.out.println("Interruption occurred");
        }
    }
}


class Cube extends Thread 
{
    int x;

    Cube(int a) 
    {
        this.x = a;
    }

    public void run() 
    {
        try 
        {
            int c = (x * x * x);
            System.out.println("\n"+x + " is odd");
            System.out.println("\nCube of " + x + " is " + c);
            Thread.sleep(200);
        } 
        catch(InterruptedException e) 
        {
            System.out.println("Interruption occurred");
        }
    }
}

class Number extends Thread {

    public void run() 
    {
        try 
        {
            Random random = new Random();
            for (int i = 0; i < 5; i++) 
            {
                Thread.sleep(300);
                System.out.println("\nGenerating random number...");
                int randomNumber = random.nextInt(50);
                System.out.println("\nRandom number generated : " + randomNumber);
                if (randomNumber % 2 == 0) 
                {
                    Square evenThread = new Square(randomNumber);
                    evenThread.start();
                } 
                else 
                {
                    Cube oddThread = new Cube(randomNumber);
                    oddThread.start();
                }
            }

        } catch(InterruptedException e) 
        {
            System.out.println("interruption occurred");
        }
    }
}

public class RandomThread
{
    public static void main(String[] args) 
    {
        Number numThread = new Number();
        numThread.start();
    }
}