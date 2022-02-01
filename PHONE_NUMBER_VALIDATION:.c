#include<stdio.h>
int main()
{
 long int n,count=0,b,i;
scanf("%ld",&n); 
 
 for(i=0;i<=n;i++)
 {
    count++;
    n=n/10;
   
    
 }
 if(count==10)
 {
     printf("Valid");
 }
 else
 {
     printf("Invalid");
 }
}