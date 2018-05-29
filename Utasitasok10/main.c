#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kérjen az algoritmus két számot, majd írja ki a köztük levő relációt
    float x, y;
    printf("adjon meg ket szamot:\n");
    scanf("%f%f", &x,&y);

    if ( x > y ) {
        printf("%f > %f", x,y);
    } else if (y > x) {
        printf("%f < %f", x,y);
    } else if (x == y) {
        printf("%f = %f", x,y);
    }
    return 0;
}
