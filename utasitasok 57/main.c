#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Fejezz�k ki m�ter, centim�ter �s millim�ter seg�ts�g�vel egy millim�terben megadott t�vols�got!

    int mm, cm, m;
    int mme, cme, me;

    printf("Adja meg a tavolsagot millimeterben: \n");
    scanf("%i", &mm);

    m = mm / 1000;
    cm = mm % 100;
    mme = cm % 10;
    cme = cm - (mme* 10);

    printf("%i meter, %i centimeter, %i millimeter", m, cm, mme);
}
