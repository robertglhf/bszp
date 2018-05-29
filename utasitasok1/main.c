#include <stdio.h>
#include <stdlib.h>



int main() {
   char ch;

    printf(" Olvassunk be egy karaktert! Írjuk ki, hogy az illető karakter kisbetű-e! ");

   printf("\nIrja be a karaktert : ");
   scanf("%c", &ch);

   if (ch >= 'A' && ch <= 'Z') {
      printf("A karakter nagybetu");
   } else if (ch >= 'a' && ch <= 'z') {
      printf("A karakter kisbetu");
   } else {
      printf("nem alfabetikus karakter");
   }

   return(0);
}
