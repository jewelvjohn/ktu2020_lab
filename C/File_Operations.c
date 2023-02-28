#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char c;

    fp = fopen("Input.txt","w");
    if(fp==NULL)
    {
        printf("Sorry, Could not open file\n");
        exit(0);
    }
    printf("\nEnter the data to be stored on this file,press ctrl+z to stop\n\n");
    while((c=getchar())!=EOF)
    {
        putc(c,fp);
    }
    fclose(fp);

    printf("\nThe data on file\n\n");
    printf("_____________________\n\n");
    fp = fopen("Input.txt","r");
    while((c=getc(fp))!=EOF)
    {
        putchar(c);
    }
    fclose(fp);
    printf("_____________________\n\n");

    fp = fopen("Input.txt","a");
    printf("\nEnter the data to be appended\n\n");
    while((c=getchar())!=EOF)
    {
        putc(c,fp);
    }
    fclose(fp);

    printf("\nThe data on the file after appended\n\n");
    printf("_____________________\n\n");
    fp = fopen("Input.txt","r");
    while((c=getc(fp))!=EOF)
    {
        putchar(c);
    }
    fclose(fp);
    printf("_____________________\n\n");

    return 0;
}