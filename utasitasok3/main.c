#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Olvassunk be egy évszámot! Állapítsuk meg, hogy az illető év szökőév-e!

    int ev;
    printf("\n adjon meg egy evszamot: ");
    scanf("%i", &ev);
    if (ev % 4 == 0) {
        printf("Szokoev \n");
    } else {
        printf("Nem szokoev \n");
    }

    return 0;
}
