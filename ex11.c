#include <stdio.h>

int main()
{
    int n;
    int c;
    int e;

    printf("inserisci un numero \n");
    scanf("%d" , &n);
    c=2;
    e=0;
    while( c<n)
    {
        if(n%c == 0){
            e++; 
        }
       
        c++;
    }

    if(e==0)
        printf("il numero %d è primo \n", n);

    else
    {
       printf("in numero %d ha %d divisori, quindi non è primo ", n, e); 
    }
    

return 0;
}