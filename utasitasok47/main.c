#include <stdio.h>
#include <stdlib.h>

// Írjunk programot, amely egy tizenhatos számrendszerbeli számot átalakít tízes számrendszerbelivé!

int main()
{
      int decimal = 0, maradek, hexadecimal;
      int count = 0;
      printf("Adja meg a hexadecimalis erteket:\n");
      scanf("%d", &hexadecimal);
      while(hexadecimal > 0)
      {
            maradek = hexadecimal % 10;
            decimal = decimal + maradek * pow(16, count);
            hexadecimal = hexadecimal / 10;
            count++;
      }
      printf("\nDecimalis: %d", decimal);
      return 0;
}
