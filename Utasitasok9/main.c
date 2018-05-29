#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Ellenőrizzük, hogy három beolvasott természetes szám pithagorászi
    // szám vagy sem (azaz teljesítik-e a következő három feltétel
    // közül az egyiket:
    //a2=b2+c2
    //b2=a2+c2
    //c2=a2+b2

    int a, b, c;
    printf("Adja meg az A, B es C erteket:\n ");
    scanf("%i%i%i", &a, &b, &c);

    if ( (a ^ 2) == (b ^ 2) + (c ^ 2) ||
         (b ^ 2) == (a ^ 2) + (c ^ 2) ||
         (c ^ 2) == (b ^ 2) + (a ^ 2) )
    {
        printf("A megadott szamok pithagoraszi szamok \n");
    } else {
        printf("A szamok nem pithagoraszi szamok \n");
    }

   // printf("%i%i%i", a, b, c);
}
