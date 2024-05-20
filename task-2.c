#include<stdio.h>

int main(){

    int a;

    //Write C program to check a number is even or odd using ternary operator.

    printf("\n\nEnter your number:- ");
    scanf("%d",&a);

    (a % 2 == 0) ? printf("Is Even number:- %d\n\n",a) : printf("Is Odd number:- %d\n\n",a);

    return 0;
}