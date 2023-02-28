#include<stdio.h>
#include<string.h>

void reverse_str(char out[], int j, int length);
int main()
{
	char str[50],wrd[50];
	int i,len=0;
	printf("Enter a word : ");
	gets(str);
	for(i=0; str[i]!='\0'; i++);
	len=i;
	reverse_str(str, 0, len-1);
	printf("The Reverse of the word is : ");
	puts(str);
	return 0;
}

void reverse_str(char out[], int j, int length)
{
	char let;
	let = out[j];
	out[j] = out[length-j];
	out[length-j] = let;
	if(j == length/2)
	{
		return;
	}
	reverse_str(out, j+1, length);
}
