#include<stdio.h>
int main()
{
    int a,r,k,c=0;
    scanf("%d%d%d",&a,&r,&k);
    for(int i=a;i<=r;i++)
    {
        if(i%k==0)
        {
            c+=1;
        }
    }
    printf("%d",c);
}