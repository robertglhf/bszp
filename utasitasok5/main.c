#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //  Olvassunk be két egész számot! Állapítsuk meg,
    //  hogy a második osztója-e az elsőnek!

    int num ,sol1, sol2;

    printf("Adja meg x erteket: ");
    scanf("%i", &num);

        if (num < -1) {
            printf(" = 2");
        } else if ( num < 1 && -1 <= num) {
            sol1 = pow(num, 2) + 1;
            printf(" = %i ", sol1);
        } else if ( num >= 1) {
            sol2 = sqrt(num);
            printf(" = %i", sol2);
        }

    return 0;

}
