// Build by Jewel John :)
// 26/09/2021

#include<stdio.h>

void trans(int matrix[20][20], int rows, int cols)
{
    int i,j;

    printf("\n\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("\t%d" ,matrix[j][i]);
        }
        printf("\n\n");
    }
}

void addon(int m1[20][20], int m2[20][20], int rows, int cols)
{
    int sum[50][50];
    int i,j;

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("\n\n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("\t%d" ,sum[i][j]);
        }
        printf("\n\n");
    }
}

void multi(int m1[20][20], int m2[20][20], int rows, int cols)
{
    int pro[50][50];
    int i,j,k;

    if(rows == cols)
    {
        for(i=0; i<rows; i++)
        {
            for(j=0; j<cols; j++)
            {
                for(k=0; k<cols; k++)
                {
                    pro[i][j] = pro[i][j] + m1[i][k] * m2[k][j];
                }
            }
        }

        printf("\n\n");
        for(i=0; i<rows; i++)
        {
            for(j=0; j<cols; j++)
            {
                printf("\t%d" ,pro[i][j]);
            }
            printf("\n\n");
        }
    }  
    else
    {
        printf("\n\nThese matrices are not multipiable..!");
    }
}

int main()
{
    int mat1[20][20], mat2[20][20];
    int i, j, option, yes;
    int rows, cols;

    start:

    printf("\n\n\tMENU");
    printf("\n\t^^^^");
    printf("\n (1) Enter Matrices");
    printf("\n (2) Display the Matrices");
    printf("\n (3) Transpose of Matrices");
    printf("\n (4) Addition of Matrices");
    printf("\n (5) Product of Matrices"); 
    printf("\n (6) Exit");

    printf("\n\nEnter the option you want to choose : ");
    scanf("%d" ,&option);

    switch (option)
    {
        case 1:
            {
                printf("\nEnter the number of Rows of the matrices : ");
                scanf("%d" ,&rows);

                printf("\nEnter the number of Columns of the matrices : ");
                scanf("%d" ,&cols); 

                printf("\n\nEnter the First Matrix");

                for(i=0; i<rows; i++)
                {
                    for(j=0; j<cols; j++)
                    {
                        printf("\nEnter the (%d,%d)th Element : " ,i+1 ,j+1);
                        scanf("%d" ,&mat1[i][j]);
                    }
                }

                printf("\nEnter the Second Matrix");
                
                for(i=0; i<rows; i++)
                {
                    for(j=0; j<cols; j++)
                    {
                        printf("\nEnter the (%d,%d)th Element : " ,i+1 ,j+1);
                        scanf("%d" ,&mat2[i][j]);
                    }
                }
            }
            break;
        case 2:
            {
                printf("\nThe First Matrix is ");
                printf("\n\n");

                for(i=0; i<rows; i++)
                {
                    for(j=0; j<cols; j++)
                    {
                        printf("\t%d" ,mat1[i][j]);
                    }
                    printf("\n\n");
                }

                printf("\nThe Second Matrix is ");
                printf("\n\n");

                for(i=0; i<rows; i++)
                {
                    for(j=0; j<cols; j++)
                    {
                        printf("\t%d" ,mat2[i][j]);
                    }
                    printf("\n\n");
                }

                printf("\nPress any Number and 'enter' key to go back to menu...");
                scanf("%d" ,&yes);
            }
            break;
        case 3:
            {
                printf("\nThe transpose of the first matrix is : ");
                trans(mat1, rows, cols);
                printf("\nThe transpose of the second matrix is : ");
                trans(mat2, rows, cols);
            }
            break;
        case 4:
            printf("\nThe Sum of the Matrices is : ");
            addon(mat1, mat2, rows, cols);
            break;
        case 5:
            printf("\nThe product of the Matrices : ");
            multi(mat1, mat2, rows, cols);
            break;
        case 6:
            goto end;
            break;
        default:
            printf("\n\nInvalid Request!");
            break;
    }

    goto start;

    end:
        printf("\n\nThe program is aborting...");
    
    return 0;
}