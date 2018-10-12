#include <stdio.h>

int main() {
    char znak;
    int wartosc_calkowita;
    double wartosc_wymierna;
    char ciag_znakow[256];

    printf("Podaj znak: ");
    scanf("%c", &znak);
    printf("Podaj ciąg znaków: "),
    scanf("%s", &ciag_znakow);
    // scanf("%s", &ciag_znakow[0]; // alternatywnie
    printf("Podaj liczbę całkowitą: "), scanf("%i", & wartosc_calkowita);
    printf("Podaj liczbę wymierną: "), scanf("%lf", &wartosc_wymierna);


    printf("\n");
    printf(
            "znak = %c"
            "\nciąg znaków = %s"
            "\n liczba całkowita = %i"
            "\n liczba wymierna = %lf"
            znak,
            wartosc_calkowita,
            wartosc_wymierna
            ciag_znakowy
            );

    return 0;
}