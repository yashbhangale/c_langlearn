#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if (age <= 70 && age>=18)
    {
        printf("You are above 18 and below 70, you cannot drive\n");
    }
    else{
        printf("You cannot Drive\n");
    }



    if(age>80){
        printf("You are above 80, you cannot drive\n");

    }
    else{
        printf("You cannot drive\n");
    }


    if(age==50){
        printf("Half Century\n");
    }
    return 0;
}