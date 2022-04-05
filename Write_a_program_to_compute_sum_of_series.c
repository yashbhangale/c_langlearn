#include<stdio.h>
#include<conio.h>
void main()
{	int n,i; 	float sum=0.0;
	clrscr();
	printf("Sum up to how many terms ?");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
	sum=sum+(1.0/i);
	printf("Iteration Number %d : ",i);
	printf("%f\n",sum);
	}
	printf("Sum of series : %f\n",sum);
	getch();
}
