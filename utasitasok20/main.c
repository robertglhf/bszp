#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Készítsünk programot, amely egy hónapról megmondja,
   //hogy melyik évszakba esik itt, Európában!

   int ho, sz;
   printf("Adjon meg egy honapot: \n");
   scanf("%i", &ho);
   if ( ho >= 1 && ho <= 2 || ho == 12) {
        printf("Tel van");
    } else if ( ho >= 3 && ho <= 5) {
        printf("tavasz van");
    } else if ( ho >= 6 && ho <= 8) {
        printf("nyar van");
    } else if ( ho >= 9 && ho <= 11) {
        printf("osz van");
   } else { printf("az evnek 12 honapja van"); }

   return 0;
}
