#include<stdio.h>

int main(){
    int a;
    printf("Enter a\n");
    scanf("%d", &a);
    //one liner
    (a < 5) ? printf("A i less than 5") : printf("A is notless than 5");
    return 0;
}
