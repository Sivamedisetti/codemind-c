#include<stdio.h>
int main()
{
    int n,arr[100],i,s=0;
    int c=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        while (arr[i]>0)
        {
            x=arr[i]%10;
            c+=x;
            arr[i]/=10;
        }
    }
    printf("%d",c);
}