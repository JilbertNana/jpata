#include <stdio.h>

int main(){

    int a;

    printf("quando sei nato? \n");
    scanf("%d" , &a);

    if(a>1969){

    printf("sei nato %d" , a-1969);
    printf(" anni dopo il primo passo sulla luna \n");

    }
    else if(a<1969){

        printf("sei nato %d" , 1969-a);

    }
    else{
        printf("sei nato lo stesso anno del primo passo sulla luna \n");
    }

    return 0;

}