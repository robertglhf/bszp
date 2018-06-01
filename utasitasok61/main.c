#include <stdio.h>
#include <stdlib.h>

int main()
{
     //Döntsük el egy természetes számról, hogy Amstrong-féle szám-e! Egy számról azt mondjuk, hogy Amstrong-féle, ha egyenlő a számjegyei köbének összegével.

    int eredeti, szam, maradek, eredmeny = 0, n = 0;

    printf("adjon meg egy szamot: ");
    scanf("%i", &szam);

    eredeti = szam;

    while (eredeti != 0) {
        eredeti /= 10;
        ++n;
    }

    eredeti = szam;

    while (eredeti != 0) {
        maradek = eredeti %10;
        eredmeny += pow(maradek, n);
        eredeti /= 10;
    }

    if (eredmeny == szam) {
        printf("%d Armstrong szam", szam);
    } else {
        printf("%d nem Armstrong szam", szam);
    }
}
