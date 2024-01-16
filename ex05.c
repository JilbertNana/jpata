#include <stdio.h>

int main(){

    int a;
    int b;

    printf("dimmi un numero\n");
    scanf("%d" , &b);
    printf("dimmi un altro numero\n");
    scanf("%d" , &a);

    if(a % b == 0){
        printf("è multipo \n");
    }
    

    else if(a % b > 0){
        printf("non è multiplo\n");

    }
}
