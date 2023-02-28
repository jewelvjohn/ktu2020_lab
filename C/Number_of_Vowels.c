#include<stdio.h>
int main()
{
	int i, j, vowels=0, spaces=0, consonants=0;
	char str[50];
	
	printf("Enter the word : ");
	gets(str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			vowels++;
		}
		else if(str[i]==' ')
		{
			spaces++;
		}	
		if(str[i]=='b' || str[i]=='c' || str[i]=='d' || str[i]=='f' || str[i]=='g' || str[i]=='h' || str[i]=='j' || str[i]=='k' || str[i]=='l' || str[i]=='m'
		|| str[i]=='n' || str[i]=='p' || str[i]=='q' || str[i]=='r' || str[i]=='s' || str[i]=='t' || str[i]=='v' || str[i]=='x' || str[i]=='y' || str[i]=='z'
	    || str[i]=='B' || str[i]=='C' || str[i]=='D' || str[i]=='F' || str[i]=='G' || str[i]=='H' || str[i]=='J' || str[i]=='K' || str[i]=='L' || str[i]=='M'
		|| str[i]=='N' || str[i]=='P' || str[i]=='Q' || str[i]=='R' || str[i]=='S' || str[i]=='T' || str[i]=='V' || str[i]=='X' || str[i]=='Y' || str[i]=='Z')
		{
			consonants++;
		}
	}
	
	printf("\nThe number of vowels in the word is : %d" ,vowels);
	printf("\nThe number of spaces in the word is : %d" ,spaces);
	printf("\nThe number of consonants in the word is : %d" ,consonants);
	
	return 0;
}
