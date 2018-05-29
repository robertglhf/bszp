#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Számítsuk ki egy általunk beolvasott számnak az abszolút
    // értékét az Abs függvény segítsége nélkül!

    int n, r;
    printf("Adjon meg egy szamot: ");
    scanf("%i", &n);
    r = n > 0 ? n : -n;

    printf("Abszolut ertek: %i", r);


}
