import java.util.Scanner;

class Volume
{
    double volume(int length,int breadth,int height)
    {
        return length*breadth*height;
    }
    double volume(double radius)
    {
        return (4/3)*3.14*radius*radius*radius;
    }
}

class CuboidVolume
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Volume obj = new Volume();

        System.out.print("\nEnter the dimentions of cuboid : ");
        int l = sc.nextInt();
        int b = sc.nextInt();
        int h = sc.nextInt();

        System.out.print("\nVolume of cuboid : "+obj.volume(l, b, h));

        System.out.print("\nEnter the radius of the sphere : ");
        double r = sc.nextInt();

        System.out.print("\nVolume of sphere : "+obj.volume(r));
    }
}