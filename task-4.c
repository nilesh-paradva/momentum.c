#include<stdio.h>


int main(){

    //Write C program use switch statement. Display Monday to Sunday.

    char day;

    printf("\ncapital:- M-Monday");
    printf("\ncapital:- T-Tuesday");
    printf("\ncapital:- W-Wednesday");
    printf("\nsmall:- t-Thursday");
    printf("\ncapital:- F-Friday");
    printf("\ncapital:- S-Saturday");
    printf("\nsmall:- s-Sunday");

    printf("\n\nEnter your first name:- ");
    scanf("%s", &day);

    switch(day){
        case 'M':
            printf("Monday");
            break;
        case 'T':
            printf("Tuesday");
            break;
        case 'W':
            printf("Wednesday");
            break;
        case 't':
            printf("Thursday");
            break;
        case 'F':
            printf("Friday");
            break;
        case 'S':
            printf("Saturday");
            break;
        case 's':
            printf("Sunday");
            break;
        default: 
            printf("Invalid input! Please enter week number between M to s.");
    }

    return 0;
}