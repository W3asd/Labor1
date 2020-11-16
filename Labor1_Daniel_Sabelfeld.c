/******************************************************************
* Projekt:ProgrammierenInC Dateiname: ??? Beschreibung: ???
* Autor: Max Mustermann (Matr.-Nr. 911911), Erstellt: Sept. 2011
******************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float erg;

    printf("Ein erstes Programm...\n");
    printf("\n");

    printf("Bitte die erste (ganze) Zahleingeben:\n");
    scanf("%d", &a);

    printf("Bitte die zweite (ganze) Zahl eingeben:\n");
    scanf("%d", &b);

    erg = (a + b);
    printf("%d+%d=%f\n", a, b, erg);
    
    erg = a - b;
    printf("%d-%d=%f\n", a, b, erg);
    
    erg = a * b;
    printf("%d*%d=%f\n",a, b, erg);
    
    erg = a / b;
    printf("%d/%d=%f\n",a,b,erg); 
    getchar();
    return 0;
}