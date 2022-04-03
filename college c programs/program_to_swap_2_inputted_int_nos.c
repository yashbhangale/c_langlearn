
/*  (stdio.h) is a header file which has the necessary 
    information to include the input/output related functions in our program

    (conio.h) is a C header file used mostly by 
    MS-DOS compilers to provide console input/output.


*/




#include<stdio.h>
void main()
{
	int a,b,c;
	//clrscr();    				 //(clrscr)fun used to clear the console screen
	printf("\n Enter two numbers : \n");
	scanf("%d%d" ,&a,&b);			 //(scanf) fun used to take input from the user.				
	printf("Before swapping...... \n");      //(printf) fun used to print the (“character, string, float, integer, octal and hexadecimal values”)
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	c=a;
	a=b;
	b=c;
	printf("After swapping......\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	//getch()					 //getch() method pauses the Output Console until a key is pressed.
}
	
	