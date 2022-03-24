#include<stdio.h>
int print (int number);
int main()
{
    int num = 1;
    print(num);
    return 0;
}
int print (int number)
{
    if(number <= 100)
    {
       printf("%d\t", number);
       print(number + 1); // Calling Function recursively
    }
}
