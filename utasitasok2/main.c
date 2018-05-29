#include <stdio.h>
#include <stdlib.h>

int main()
{
    //A billentyűzetről beolvasunk egy egész számot.
    //A programunk vizsgálja meg, hogy a szám osztható-e 12-vel,
    //és írjon ki a képernyőre egy üzenetet!

    int num;
    printf("\nadjon meg egy szamot: ");
    scanf("%i", &num);
    if (num % 12 == 0) {
        printf("Oszthato 12vel");
    } else {
        printf("Nem oszthato 12vel");
    }

    return 0;
}
