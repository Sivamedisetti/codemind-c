#include<stdio.h>
int main()
{
	int n,r,m,i;
	scanf("%d%d",&n,&r);
	for(i=1;i<=r;i++)
	{
		
		if(i%2!=0)
		{
		m=n*i;
			printf("%d x %d = %d
",n,i,m);
		}
	
	}
}