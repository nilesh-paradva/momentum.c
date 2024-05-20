#include<stdio.h>


int main(){

    //Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following

    int a,b,c,d,e,f;

    printf("\nPhysics:- ");
    scanf("%d",&a);

    printf("\nChemistry:- ");
    scanf("%d",&b);

    printf("\nBiology:- ");
    scanf("%d",&c);

    printf("\nMathematics:- ");
    scanf("%d",&d);

    printf("\nComputer:- ");
    scanf("%d",&e);

    f=(a+b+c+d+e)/5;

    printf("\nPercentage:- %d\n\n",f);

    int g=f;

    if(g<0 || g>=100){

        printf("Enter your valid number");

    }else if(g<40){

        printf("Grade F");

    }else if(g>=50 && g<60){

        printf("Grade E"); 

    }else if(g>=60 && g<70){

        printf("Grade D");

    }else if(g>=70 && g<80){

        printf("Grade C");

    }else if(g>=80 && g<90){

        printf("Grade B");

    }else{

        printf("Grade A");

    }
   

    return 0;
}