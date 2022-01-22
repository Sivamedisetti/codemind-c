#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;n!=0;i++)
    {
        i=n%10;
        c=c*10+i;
        n=n/10;
        
    }
    printf("%d",c);
}