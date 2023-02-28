#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,flag = 0;
    char str[30],rev[30];
    printf("Enter the string : ");
    gets(str);
    for(i=0; str[i]!='\0'; i++);
    for(j=i; j>=0; j--)
    {
    	rev[i-j-1] = str[j];
	}
	printf("\nThe reverse of the string is : ");
	puts(rev);
	for(i=0; str[i]!='\0'; i++)
	{
		if(rev[i]!=str[i])
		{
			printf("\nThe string is not a palindrome\n");
			flag = 100;
			break;
		}
	}
	if(flag == 0)
	{
		printf("\nThe string is a palindrome\n");
	}
}



