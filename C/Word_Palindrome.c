#include <stdio.h>

int main()
{
	char word[50];
	int length,i,j,flag=0;
	
	printf("Enter the word : ");
	scanf("%s" ,&word);
	
	length = strlen(word);
	printf("\nThe length of the word '%s' is : %d" ,word ,length);
	
	j = length;
	for (i=0; i<length; i++)
	{
		j--;
		if (j<0)
		{
			break;
		}
		if (word[i]!=word[j])
		{
			flag = 1;
			printf("\n\n'%s' is not a palindrome\n" ,word);
			break;
		}
	}
	if (flag == 0)
	{
		printf("\n\n'%s' is a palindrome.\n" ,word);
	}
	
	return 0;
}
