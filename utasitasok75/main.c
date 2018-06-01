#include <stdio.h>
#include <stdlib.h>

int main()
{
  int szam, sum, i, min, max;

  printf("\n Adja meg a kezdo es a vegpontot\n");
  scanf("%d %d", &min, &max);

  printf("Tokeletes szamok %d and %d are:\n", min, max);
  for(szam=min; szam<=max; szam++)
   {
     for(i = 1, sum =0 ; i < szam ; i++)
      {
        if(szam % i == 0)
          sum = sum + i ;
      }

     if (sum == szam)
       printf(" %d  ", szam) ;
   }

 return 0;
}
