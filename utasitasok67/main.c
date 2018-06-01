#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Adott n természetes szám esetén, határozzuk meg az n! (n faktoriális) értékét!
    int n, i;
    unsigned long long factorial = 1;

    printf("Adjon meg egy szamot: ");
    scanf("%d",&n);

    if (n < 0)
        printf("Csak pozitiv szam lehetseges");

    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;
        }
        printf("%d faktorialisa = %llu", n, factorial);
    }

    return 0;

}
