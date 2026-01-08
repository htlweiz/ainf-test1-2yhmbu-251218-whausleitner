#include <stdio.h>

int main()
{
printf("Aufgabe 1: Weihnachtskekse");
int number_buscuits = 0;
float diameter_buscuit = 0;
float area = 0;

    printf("Geben sie die Anzahl der Kekse ein: ");
    scanf("%d", &number_buscuits);
    printf("Geben sie den Durchmesser eines Keks ein: ");
    scanf("%f", &diameter_buscuit);

    area = pow((diameter_buscuit/2),2)*3*number_buscuits;

    printf("Für die Glasur aller %d Kekse wird Schokolade für %f cm² benötigt.", number_buscuits, area);

    return 0;
}
