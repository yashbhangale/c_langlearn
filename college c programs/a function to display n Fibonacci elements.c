#include<stdio.h>
void fibo(int);
void main() 
{
   int n;    
   printf("\n Enter a number to generate Fibonacci series for first n terms\n", n);
   scanf("%d", &n);
   fibo(n);
}
 

void fibo(int n)
{
   int i, a=0; b=1, c=0;
   printf("Fibonacci series for %d terms:-\n",n);
   for(i=0; i<n; i++)
   {
       printf("%d ",c);
       a=b;
       b=c;
       c=a+b;
   }
}
