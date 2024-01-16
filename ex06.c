#include <stdio.h>

int main(){

    float c;

printf("dimmi una temperatura in c \n");
scanf("%f" , &c);


if ( c < -273.15){
    printf("non accettabile \n");
}

else {
    printf("gradi in farenheite %f \n", (9/5)* c + 32);
    printf("gradi in kelvin %f \n", c + 273.15);
}
}