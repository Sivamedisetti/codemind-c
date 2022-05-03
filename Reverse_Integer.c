#include<stdio.h>
int main()
{
int n,s=0;
scanf("%d",&n);
while (n!=0)
{
    int x;
    x=n%10;
    n=n/10;
    s=s*10+x;
}
printf("%d",s);

}
    
