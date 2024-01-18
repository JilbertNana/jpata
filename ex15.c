#include <stdio.h>

int main(){
    char lettera;
    char a='a', e='e', i='i', o='o', u='u';

    printf("inserisci una lettera \n");
    scanf("%c", &lettera);
    
    if((lettera == a)||( lettera == e )||( lettera == i )||( lettera == o )||( lettera == u )){
        printf(" %c è una vocale \n", lettera);
    }
    else{
        printf(" %c è una consonante \n", lettera);
        
    }
    return 0;
}