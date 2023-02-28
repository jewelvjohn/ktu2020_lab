import java.util.Scanner;
class MultiArrayAdd
{
    public static void main(String[] args)
    {
        int m, n, p, q;
        int i, j;
        Scanner sc = new Scanner(System.in);

        System.out.print("\nEnter the order of the 1st matrix : ");
        m = sc.nextInt();
        n = sc.nextInt();

        System.out.print("\nEnter the order of the 2nd matrix : ");
        p = sc.nextInt();
        q = sc.nextInt();
        
        if(m != p && n != q)
        {
            System.out.print("\nThe Arrays that you are going to be inputed cannot be added!\n\t\t Aborting......");
            System.exit(0);
        }

        int[][] array1 = new int[m][n];
        int[][] array2 = new int[p][q];
        int[][] result = new int[p][q];

        System.out.print("\nEnter the elements of the 1st matrix : ");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                System.out.print("\nEnter the ("+m+","+n+")th Element of the array : ");
                array1[i][j] = sc.nextInt();
            }
        }

        System.out.print("\nEnter the elements of the 2nd matrix : ");
        for(i=0; i<p; i++)
        {
            for(j=0; j<q; j++)
            {
                System.out.print("\nEnter the ("+p+","+q+")th Element of the array : ");
                array2[i][j] = sc.nextInt();
            }
        }

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                result[i][j] = array1[i][j] + array2[i][j];
            }
        }

        System.out.print("\nThe sum of the inputed matrices is =\n\n");

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                System.out.print(+result[i][j]);
                System.out.print("\t");
            }
            System.out.print("\n");
        }
        System.out.print("\n\n");
    }
} 