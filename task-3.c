#include<stdio.h>

int main(){

    // Write C program to find out max from 4 numbers using nested if.

    int a,b,c,d;

    printf("\n\nEnter number A:- ");
    scanf("%d",&a);

    printf("\nEnter number B:- ");
    scanf("%d",&b);

    printf("\nEnter number C:- ");
    scanf("%d",&c);

    printf("\nEnter number D:- ");
    scanf("%d",&d);

    if(a>b){
        if(a>c){
            if(a>d){
                printf("A is max:- %d",a);
            }else{
                printf("D is max:- %d",d);
            }
        }else{
            if(c>d){
                printf("C is max:- %d",c);
            }else{
                printf("D is max:- %d",d);
            }
        }
    }else{
        if(b>c){
            if(b>d){
                printf("B is max:- %d",b);
            }else{
                printf("D is max:- %d",d);
            }
        }else{
            if(c>d){
                printf("C is max:- %d",c);
            }else{
                printf("D is max:- %d",d);
            }
        }
    }

    return 0;
}
