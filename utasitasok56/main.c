#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Számítsunk át órára, percre és másodpercre egy másodpercben megadott időt!
    int s, m, h, total, m_end;
    printf("Adja meg az idot masodpercekben: \n");
    scanf("%i", &total);

    m = total / 60;
    s = total % 60;
    h = m / 60;
    m_end = m - (h * 60);

    printf("%i ora, %i perc, %i masodperc", h, m_end, s);
}
