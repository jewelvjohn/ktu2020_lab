import java.util.Scanner;

public class Sparse {
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int[][] array = new int[10][10];
        int count = 0;
        int size = 0;
        int i,j;
        int traverse = 1;

        System.out.print("\nEnter order of the matrix : ");
        System.out.print("\nRows(m) : ");
        int m = sc.nextInt();
        System.out.print("\nColumns(n) : ");
        int n = sc.nextInt();
        
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                System.out.print("\n("+(i+1)+","+(j+1)+")th Element : ");
                array[i][j] = sc.nextInt();
            }
        }

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(array[i][j] != 0)
                {
                    count++;
                }
            }
        }
        System.out.print("\nNumber of non-zero elements : "+count);

        int[][] sparse = new int[count+1][3];
        int[][] transpose = new int[count+1][3];

        sparse[0][0] = m;
        sparse[0][1] = n;
        sparse[0][2] = count;

        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(array[i][j] != 0)
                {
                    size++;
                    sparse[size][0] = i;
                    sparse[size][1] = j;
                    sparse[size][2] = array[i][j];
                }
            }
        }

        System.out.print("\nThe matrix is : \n");
        System.out.print("\nRows\t\tColumns\t\tValue\n");
        System.out.print("\n");
        for(i=0;i<=count;i++)
        {
            System.out.print("\n"+sparse[i][0]+"\t\t"+sparse[i][1]+"\t\t"+sparse[i][2]);
        }

        transpose[0][0] = n;
        transpose[0][1] = m;
        transpose[0][2] = count;

        for(i=0;i<n;i++)
        {
            for(j=1;j<=count;j++)
            {
                if(i == sparse[j][1])
                {
                    transpose[traverse][0]=i;
                    transpose[traverse][1]=sparse[j][0];
                    transpose[traverse][2]=sparse[j][2];
                    traverse++;
                }
            }
        }
        

        System.out.print("\nThe transpose of the matrix is : \n");
        System.out.print("\nRows\t\tColumns\t\tValue\n");
        System.out.print("\n");
        for(i=0;i<=count;i++)
        {
            System.out.print("\n"+transpose[i][0]+"\t\t"+transpose[i][1]+"\t\t"+transpose[i][2]);
        }
    }
}
