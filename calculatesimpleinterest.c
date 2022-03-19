#include<stdio.h>

int main(){
    int principal=100, rate=6, years=3;
    int simpleinterest = (principal*rate*years)/100;
    printf("The value of simple inrterest is %d", simpleinterest);
    return 0;
}