#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    for(int j=min;j>0;j--)
    {
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            printf("%d",j);
            break;
        }
    }
}