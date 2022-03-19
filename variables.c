#include <stdio.h>
int main()
{
    int a = 4;
    // int b = 8.5; //not recommended coz 8.5 is not an int
    float b = 9.8;
    char c = 'u';
    int d = 45;
    int e = 45 + 9;
    printf("The value of a is %d \n", a);
    printf("The value of a is %f \n", b);
    printf("The value of a is %c \n", c);
    printf("Sum of a and d is %d \n", a+d);
    printf("Sum of a and d is %d \n", e);
    return 0;
}