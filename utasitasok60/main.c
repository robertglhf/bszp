#include <stdio.h>
#include <stdlib.h>

int main()
{
     //K�sz�ts�nk programot, amely ki�rja az N-es szorz�t�bl�t (1xN=, 2xN=, ...)!
    int n, i;
    int i1, i2,i3,i4,i5,i6,i7,i8,i9, i10;
    printf("Adjon egy szamot: ");
    scanf("%i", &n);

    for(i=1; i<=10; ++i)
    {
        printf("%d x %d = %d \n", n, i, n*i);
    }

    return 0;

}
