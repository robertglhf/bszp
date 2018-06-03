#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr1, *fptr2;
    char filen[100], c;

    printf("Afja meg az olvasando file nevet \n");
    scanf("%s", filen);

    //
    fptr1 = fopen(filen, "r");
    if (fptr1 == NULL)
    {
        printf("nem lehet a %s filet megnyitni vagy nem letezeik \n", filen);
        exit(0);
    }

    printf("Adja meg az irando file nevet \n");
    scanf("%s", filen);

    //
    fptr2 = fopen(filen, "w");
    if (fptr2 == NULL)
    {
        printf("nem lehet a %s filet megnyitni vagy nem letezik \n", filen);
        exit(0);
    }

    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }

    printf("\nTartalom at lett masolva", filen);

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}

