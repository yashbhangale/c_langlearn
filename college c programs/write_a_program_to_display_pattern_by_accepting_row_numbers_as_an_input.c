#include<stdio.h>
#include<conio.h>
void main()
{
    int r,i,j;
    //clrscr();
    printf("Enter number of rows:\n");
    scanf("%d,&r");
    for(i=1;i<=r;++i)
    {
        for(j=1;j<=i;++j)printf("%d ",j);
        printf("\n");
    }
    //getch();
}
