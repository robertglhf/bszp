#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Határozzuk meg a 2x szám utolsó számjegyét!
    // Az x természetes szám és a billentyűzetről olvassuk be.

    int x, s, r;
    printf("Adjon meg egy szamot:\n");
    scanf("%i",&x);

    s = pow(2,x);
    r = s % 10;
    printf("%i utolso szamjegye %i\n",s,r);
}
