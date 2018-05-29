#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Olvassunk be két egész számot, a nagyobbat osszuk el a kisebbel,
    //majd írjuk ki a hányadost és a maradékot!

     int x, y, result, mod;
     printf("Adjon meg 2 szamot: \n");
     scanf("%i", &x);
     scanf("%i", &y);
     printf("\n");

     if(x > y) {
        result = x / y;
        mod = x % y;
        printf("Eredmeny: %i \n Maradek: %i", result, mod);
     } else if (y >= x) {
        result = y / x;
        mod = y % x;
        printf("Eredmeny: %i \n Maradek %i \n", result, mod);
     }
    return 0;
}
