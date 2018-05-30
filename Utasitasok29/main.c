#include <stdio.h>
#include <stdlib.h>

int main()
{
    //  Ha 50 dollárt a bankba teszünk, és a kamatláb
    //  k%, mennyi pénzünk lesz n év múlva?

    float k, kamat, szazalek;
    int e;
    printf("Adja meg a kamatlabat es az idotartamot evben");
    scanf("%f%i", &k, &e);
    szazalek = k / 100;
    kamat = 50 * (1 + szazalek * e);
    printf("%f \n", kamat);
}
