#include<stdio.h>
int main()

{
    int n,i,r,s=0,sqr;
    scanf("%d",&n);
    sqr=n*n;
    //printf("%d",sq);
    for(i=1;sqr>0;)
    {
        r=sqr%10;
        s+=r;
        sqr/=10;
    }

    if(n==s)
    {
        printf("Neon Number");
    }
    else
    printf("Not Neon Number");
}
    