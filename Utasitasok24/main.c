#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float v, pph, pps, maradekViz;
    int h, s, m, seconded;
    printf("Mennyi viz van a rendszerben? m3");scanf("%f", &v);\
    printf("mennyi idő telt el? (hh-mm-ss)");scanf("%i%i%i", &h,&m,&s);

    seconded = (h * 3600) + ( m * 60) + s;
    //printf("%i", seconded % 3600);

    pph = (v / 1000) * 2;
    pps = pph / seconded;
    maradekViz = v - pps;
    printf("%f", maradekViz);

}
