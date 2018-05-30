#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    //Döntsük el egy beolvasott n-ről, hogy négyzetszám-e?

    int n, ivar;
    float fvar;
    printf("Adjon meg egy szamot: \n");
    scanf("%i", &n);

    fvar = sqrt((double)n);
    ivar = fvar;

    if (ivar == fvar){
        printf("a szam negyzetszam");
    } else { printf("a szam nem negyzetszam;");}

    return 0;
}
