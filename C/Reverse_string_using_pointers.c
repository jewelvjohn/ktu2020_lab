//A Program to Reverse of a string using pointers and user defined funtion
//By Jewel John CSB, Roll no.30
// 27/09/2021

#include<stdio.h>

void reverse(char string[])
{
    int i, last=0;
    char *p;
    char reverse[50];

    for(i=0; string[i]!='\0'; i++)
    {
        last++;
    }

    p = &string[last];

    for(i=0; string[i]!='\0'; i++)
    {
        p--;
        reverse[i]= *p;
    }

    printf("\nThe reverse of the string is : %s" ,reverse);
}

int main()
{
    char str[50];

    printf("\n\nEnter the string : ");
    gets(str);
    reverse(str);

    return 0;
}
