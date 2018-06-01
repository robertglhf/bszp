#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[1000], n;
   int i, gyakorisag;

   printf("Adjon meg egy szamot: ");
   scanf("%i", &num);

   printf("Adja meg a keresett szamot: ");
   scanf("%i",&n);

   while ( num != 0 ) {

   }

   for(i = 0; num[i] != 0; ++i)
   {
       if(n == num[i])
           ++frequency;
   }

   printf("%i gyakorisaga = %d", n, frequency);

   return 0;

}
