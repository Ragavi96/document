#include<stdio.h>
void main()
{
 int a=0,b=1,r,n;
 printf("enter the range");
 scanf("%d",&n);
 printf("%d",a);
 printf("%d",b);
 while(n>0)
 {
     r=a+b;
     printf("%d",r);
     int temp;
     temp=a;
     a=b;
     b=temp;
     }
     }
 
