#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, i;
    float num[1000], sum = 0.0,sum2 = 0.0, szamtani, mertani;

    printf("Szamok mennyisege: ");
    scanf("%d", &n);

    while (n > 100 || n <= 0) {
        printf("Szamok mennyisega max 1000 lehet \n");
        printf("Adja meg a szamot újra: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; ++i)
    {
        printf("%d. Adjon egy szamot: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
        sum2 *= num[i];
    }

    szamtani = sum / n;
    mertani = sqrt(sum2);
    printf("Szamtani atlag = %.2f \n Mertani atlag = %.2f", szamtani, mertani);

    return 0;

}
