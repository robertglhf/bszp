#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Adott n term�szetes sz�m eset�n, hat�rozzuk meg az n! (n faktori�lis) �rt�k�t!
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
