#include <stdio.h>

char main(){
    char banca[]= "\nbenvenuti in Asfaleia!";
    int n;
    int x;
    int a;
    int b=50;
    int l= 5;
    int y;
    int m=20;
    int s=50;
    int c;

    printf("%s \n\n", banca);
    printf("inserisci la metratura \n");
    scanf("%d", &n);

    while(n<99 || n>251){
        printf("ci scusiamo ma la metratura non rientra nella fascia coperta dal servizio\n\n");
        return 0;
    }

    if(n>= 100 && n<= 250){
        printf("la casa è adatta al servizio. \n");
        if(n >= 100 && n<150){
        printf("il costo per questa metratura è di %d€ \n\n", n*l );
        }
        else if(n>= 150 && n<200){
         printf("il costo per questa metratura è di %d€ \n\n", n*l);
        }
        else if(n >= 200 && n<250){
         printf("il costo per questa metratura è di %d€\n\n", n*l);
        }
        printf("inserire quantità di finestre \n");
        scanf("%d", &x);
        printf("il costo aggiuntivo per %d finestre è di %d€ \n\n",x ,b*x );
        printf("inserire quantità di porte \n");
        scanf("%d", &y);
        printf("il costo aggiuntivo per %d porte è di %d€ \n\n",y ,m*y );
        printf("inserire quantità di balconi \n");
        scanf("%d", &c);
        printf("il costo aggiuntivo per %d balconi è di %d€ \n\n",c ,s*c );
    }
    printf("il costo totale è di %d€ \n\n", m+y + s*c + n*l + b*x);
    return 0;
}