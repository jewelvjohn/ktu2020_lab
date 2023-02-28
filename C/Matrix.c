#include<stdio.h>
#include<string.h>

typedef struct tuple
{
    int row;
    int column;
    int value;
} sparse;

int size;
sparse matrix[20];
sparse sum[20];

void display(int length, sparse *matrix)
{
    int i;

    printf("\n\n Rows Columns Value \n");
    for(i=0; i<length+1; i++)
    {
        printf("  %d  " ,matrix[i].row);
        printf("  %d  " ,matrix[i].column);
        printf("  %d  " ,matrix[i].value);

        printf("\n");
    }
}

void transform(int rows, int cols, int array[20][20])
{
    int i,j;
    int count=0;

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            if(array[i][j] != 0)
            {
                count++;
                matrix[count].row = i;
                matrix[count].column = j;
                matrix[count].value = array[i][j];
            }
        }
    }

    matrix[0].row = rows;
    matrix[0].column = cols;
    matrix[0].value = count;

    size = count;

    printf("\nThe tuple form of the matrix is : \n");

    display(size, matrix);
    
    printf("\n");
}

int main()
{
    int m,n;
    int p,q;
    int i,j;
    int a[20][20];
    int b[20][20];
    int x,y;
    int count = 1;
    int maxrows, maxcolumns;

    sparse sa[20];
    sparse sb[20];

    printf("\nEnter the Order of the first matrix : ");
    scanf("%d%d" ,&m ,&n);
    printf("\nEnter the Order of the second matrix : ");
    scanf("%d%d" ,&p ,&q);

    printf("\nENTER THE 1ST MATRIX");
    printf("\n^^^^^^^^^^^^^^^^^^^^\n\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\nEnter (%d,%d)th Element : " ,i+1 ,j+1);
            scanf("%d" ,&a[i][j]);
        }
    }

    printf("\nINPUTTED MATRIX\n\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\t");
            printf("%d" ,a[i][j]);
        }
        printf("\n\n");
    }

    printf("\nENTER THE 2ND MATRIX");
    printf("\n^^^^^^^^^^^^^^^^^^^^\n\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("\nEnter (%d,%d)th Element : " ,i+1 ,j+1);
            scanf("%d" ,&b[i][j]);
        }
    }

    printf("\nINPUTTED MATRIX\n\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("\t");
            printf("%d" ,b[i][j]);
        }
        printf("\n\n");
    }

    transform(m, n, a);
    memcpy(sa, matrix, sizeof(matrix));
    x = size;

    transform(p, q, b);
    memcpy(sb, matrix, sizeof(matrix));
    y = size;
    
    for(i=1; i<x; i++)
    {
        for(j=1; j<y; j++)
        {
            if(sa[i].row == sb[j].row)
            {
                if(sa[i].column == sb[j].column)
                {
                    sum[count].row = sa[i].row;
                    sum[count].column = sa[i].column;
                    sum[count].value = sa[i].value + sb[j].value;

                    count++;
                    maxrows = sa[i].row;
                    maxcolumns = sa[i].column;
                }
                else if(sa[i].column > sb[j].column)
                {
                    sum[count].value = sb[j].value;
                    sum[count].row = sb[j].row;
                    sum[count].column = sb[j].column;

                    count++;
                    maxrows = sb[j].row;
                    maxcolumns = sa[j].column;
                }
                else if(sa[i].column < sb[j].column)
                {
                    sum[count].value = sa[i].value;
                    sum[count].row = sa[i].row;
                    sum[count].column = sa[i].column;

                    count++;
                    maxrows = sa[i].row;
                    maxcolumns = sa[i].column;
                }
            }
        }
    }

    sum[0].row = maxrows+1;
    sum[0].column = maxcolumns+1;
    sum[0].value = count; 

    printf("\nThe sum of the entered matrix is : ");
    display(count, sum);

    return 0;
}

