#include <stdio.h>
#include <stdlib.h>

int main()
{
    //  Ha 50 doll�rt a bankba tesz�nk, �s a kamatl�b
    //  k%, mennyi p�nz�nk lesz n �v m�lva?

    float k, kamat, szazalek;
    int e;
    printf("Adja meg a kamatlabat es az idotartamot evben");
    scanf("%f%i", &k, &e);
    szazalek = k / 100;
    kamat = 50 * (1 + szazalek * e);
    printf("%f \n", kamat);
}
