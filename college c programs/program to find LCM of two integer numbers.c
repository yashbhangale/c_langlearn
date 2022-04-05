#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,r,m,n;
	clrscr();
	printf("Enter two integer numbers : \n");
	scanf("%d%d",&no1,&no2);
	m=no1;
	n=no2;
	if(no1<no2)
	{
	no1=no1+no2;
	no2=no1-no2;
	no1=no1-no2;
	}
	do
	{
	r=no1%no2;
	no1=no2;
	no2=r;
	}while(r!=0);

	printf("GCD of two numbers: %d\n",no1);
	printf("LCM of two numbers: %d\n",(m*n)/no1);

	getch();
}
