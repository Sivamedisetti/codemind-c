#include<stdio.h>
int rev(int n)
{
    int c = n,s=0;
    while(c!=0)
    {
        int i = c%10;
        s = s*10+i;
        c = c/10;
    }
    return s;
}
int rec(int n)
{
    int c;
    c = rev(n);
    if(rev(c)==c)
    {
    	return true;
	}
	else
	{
		return false;
	}
}
int main()
{
    int n;
    scanf("%d",&n);
    int m = rec(n);
    if(m==1)
    {
    printf("True");
    }
    else
    {
        printf("False");
    }
}