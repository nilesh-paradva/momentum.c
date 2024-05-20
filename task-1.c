#include<stdio.h>

int main(){

    char cha;

    printf("\n\nEnter any character:- ");
    scanf("%s", &cha);


    if((cha>='a' && cha<='z') || (cha>='A' && cha<='Z')){
        printf("Alphabet:- %c\n\n", cha);
    }else if(cha>='0' && cha<='9'){
        printf("Digit:- %c\n\n", cha);
    }else {
        printf("Special character:- %c\n\n", cha);
    }

    return 0;
}