#include <stdio.h>
#include <stdlib.h>

int main()
{
    //  Készítsünk számítógép programot, amely az egész számok közötti alapműveletek
    //  (+, -, *, /) elvégzésére alkalmas! Védjük ki a nullával való osztást!

    char operator;
    double szam1,szam2;

    printf("Adjon egy muveletet (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Adjon 2 szamot: ");
    scanf("%lf %lf",&szam1, &szam2);

    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",szam1, szam2, szam1 + szam2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",szam1, szam2, szam1 - szam2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",szam1, szam2, szam1 * szam2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",szam1, szam2, szam1 / szam2);
            break;

        default:
            printf("Ez nem egy muvelet!");
    }

    return 0;

}
