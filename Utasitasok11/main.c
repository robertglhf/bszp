#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Olvassunk be két egész számot! Állapítsuk
    //meg, hogy a második osztója-e az elsőnek

    float x, y;
    int res;
    printf("Adjon meg 2 egesz szamot:\n");
    scanf("%i%i", &x,&y);
    fmod(x, y) == 0 ? printf("Masodik szam osztoja az elsonek") : printf("Masodik szam nem osztoja az elsonek");

}
