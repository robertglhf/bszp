#include <stdio.h>
#include <stdlib.h>

void calc(int n) {

    int i;
    float num[1000], sum = 0.0,sum2 = 1, szamtani, mertani;

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
    printf("\nSzamtani atlag = %.2f \n Mertani atlag = %.2f\n", szamtani, mertani);

}

int main()
{
    int n;
    printf("Szamok mennyisege: ");
    scanf("%d", &n);

    calc(n);

    return 0;
}
