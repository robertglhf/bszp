#include <stdio.h>
#include <stdlib.h>

int main()
{
    //�rjunk programot, amely k�rjen be h�rom eg�sz sz�mot
    //�s �rja ki, hogy van-e k�z�tt�k k�t azonos sz�m!

    float a, b ,c;
    printf("Adjon meg 3 szamot: \n");
    scanf("%f%f%f", &a,&b,&c);
    if (a == b || a == c || b ==c) {
        printf("van 2 azonos szam");
    } else {
        printf("nincs 2 azonos szam");
    }
}
