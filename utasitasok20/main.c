#include <stdio.h>
#include <stdlib.h>

int main()
{
   //K�sz�ts�nk programot, amely egy h�napr�l megmondja,
   //hogy melyik �vszakba esik itt, Eur�p�ban!

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
