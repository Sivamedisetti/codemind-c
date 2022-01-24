#include<stdio.h>
int main()
{
   char ch,n,m;
	scanf("%c",&ch);
	n=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	m=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
	if(n||m)
	{
		
		printf("Vowel");
		
    }
	
	else
	{
		printf("Consonant");
	}

}