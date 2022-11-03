#include<stdio.h>
#include<math.h>
int Prime(int n)
{
 if(n==1)
 {
     return 0;
 }
 for(int i=2;i<(int)sqrt(n)+1;i++)
 {
     if(n%i==0)
     {
         return 0;
     }
 }return 1;
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int a=x+y+1;
    while(a!=0)
    {
        if(Prime(a))
        {
            printf("%d",abs(x+y-a));
            break;
        }
        a+=1;
    }
}