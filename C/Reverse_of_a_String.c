#include <stdio.h>
#include <string.h>

int main()
{
	int i,j;
	char str[20];
	
	printf("Enter the word : ");
	gets(str);
	
	for(i=0; str[i]!='\0'; i++);
	
	printf("\nThe length of the word is : %d\n" ,i);
	
	printf("\nThe reverse of the word is : ");
	for(j=i; j>=0; j--)
	{
		printf("%c" ,str[j]);
	}
}
