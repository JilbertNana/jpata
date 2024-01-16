#include <stdio.h>

int main(){

    int utente;
    int paese;

        printf("a che età si puo prendere la patente nel tuo paese?\n");
        scanf("%d" , &paese);

        printf("quanti anni hai \n");
        scanf("%d" , &utente);
  

    if (paese < utente){
        printf("puoi prendere la patente \n");
    }
    else if (paese > utente){
        printf("non puoi prendere la patente \n");
    }
}