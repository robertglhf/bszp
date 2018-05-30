#include <stdio.h>
#include <stdlib.h>

int main() {

     // Egy vállalatnál minden dolgozó a belépéstől számított 5 évenként
     //külön jutalmat kap. A program kérje be a szolgálatban eltöltött időt
     //(év) és írja ki, hogy jár-e a jutalom.

     int i;
     printf("adja meg a dolgozott evet: \n");
     scanf("%i", &i);
     if (i % 5 == 0 && i > 0) {
        printf("Jar jutalom\n");
     } else {
        printf("Nem jar jutalom\n");
     }


}

