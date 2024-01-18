#include <stdio.h>
char operatore(){
    char simbolo;

    printf("inserisci un operatore(+ - * /)\n");
    scanf(" %c", &simbolo);

    while(simbolo!='+' && simbolo!='-' && simbolo!='*' && simbolo!='/'){
        printf("\n\nil carattere digitato non è un operatore, riprova. \n");
        printf("seleziona un operatore (+ - * /) \n");
        scanf(" %c", &simbolo);
    }
return (simbolo);
}
   
    
float main(){
    float x;
    float y; 
    char simbolo; 

    printf("inserisci un numero \n");
    scanf(" %f", &x);
    printf("inserisci un altro numewro \n");
    scanf(" %f", &y);
    // printf("inserisci un operazione (+ - * /) \n");
    // scanf(" %c", &simbolo);
    simbolo= operatore();

    if(simbolo == '+' ){
        printf ("la tua addizione è %f \n", x + y);
    }
    else if(simbolo == '-'){
        printf ("la tua sottrazione è %f \n", x - y);
    }
    else if(simbolo == '*'){
        printf ("la tua moltiplicazione è %f ",  x * y);
    }
    else if(simbolo == '/'){
        printf ("la tua divisione è %f",  x / y);
    }
    return 0;

}


