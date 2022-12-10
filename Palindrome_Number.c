#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        int s=0;
        scanf("%d",&n);
        int m=n;
        while(n!=0)
        {
            int r=n%10;
            s=s*10+r;
            n/=10;
        }
       // printf("%d%d
",m,s);
        if(m==s)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}