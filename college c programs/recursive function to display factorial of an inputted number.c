#include<stdio.h>
#include<conio.h>
void main()
{
	int no,factorial;
	int fact (int no);
	clrscr();
	printf("Enter a number:");
	scanf("%d",&no);
	factorial=fact(no);
	printf("Factorial=%d",factorial);
	getch();
}
