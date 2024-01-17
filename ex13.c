#include <stdio.h>

int main(){
    int a;
    int b =1;
    int c;
    int n = 1;
    float x;
    
    printf("inserisci un numero \n");
    scanf("%d", &a);
    while(a>=0){    
        x= a / b;
        printf("media: %f \n", x);       
        b++;
        printf("inserisci un numero \n");
        scanf("%d", &a);
        n++;
        printf("%d", n);

    }
    return 0;
}