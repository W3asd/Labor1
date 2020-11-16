/******************************************************************
* Projekt:ProgrammierenInC Dateiname: Labor1_Daniel_Sabelfeld.c Beschreibung: ???
* Autor: Daniel Sabelfeld (Matr.-Nr. 937299), Erstellt: Nov. 2020
******************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float erg;

    printf("Aufgabe 1\n");

    printf("Das Programm nimmt die beiden int und addiert, subtrahiert, dividiert und multipliziert die eingegebenen Werte\n Das Ergebnis wird in der Variable erg als float gespeichert \n");
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

    
    
    printf("\nAufgabe 2\n\n");
    printf("Dieser Text\nenthaelt\nviele\nZeilenumbrueche\n\n");
    printf("Aufgabe 3\n\n");
    
    printf("man muss \\ und \" escapen mit einem \\ davor\n ansonsten kommt ein Error\n");
    printf(". (Punkt)\n- (Minuszeichen)\n` (Hochkomma)\n& (Kaufmanns-„Und“)\n/ (Slash)\n\\ (Backslash)\n_ (Unterstrich)\n| (Strich)\n( (Klammer auf)\n) (Klammer zu)\n\" (Anführungsstriche)\n` (einfacher Anführungsstrich)\no (kleines o)\n\n");
    printf("Aufgabe 3\n");
    printf("      .-'&    '-.\n");
    printf("     /            \\\n");
    printf("    :   o    o     ;\n");
    printf("   (     (_         )\n");
    printf("    :              ;\n");
    printf("     \\    __      /\n");
    printf("      `-._____.-'\n");
    printf("       / `\"\"\"` \\\n");
    printf("      /|/\\/\\/\\ _\\\n");
    printf("     (_|/\\/\\/\\\\__)\n");
    printf("       |_______|\n");
    printf("      __)_ |_ (__\n");
    printf("     (_____|_____)\n");

    return 0;
}
