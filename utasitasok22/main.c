#include <stdio.h>
#include <stdlib.h>

int main()
{
    //  Készítsünk számítógép programot, amely az egész számok közötti alapműveletek
    //  (+, -, *, /, %) elvégzésére alkalmas! Védjük ki a nullával való osztást!

    float a, b;
    float res;
    char op;

    printf("adja meg 2 szamot: \n ");
    scanf("%f%f",&a,&b);
    printf("adja meg a muveletet: ");scanf("%s", &op);

    if (op == "+") {
        res = a + b;
        printf("%f", res);
    } else if (op == "-"){
        res = a - b;
        printf("%f", res);
    } else if (op == "*"){
        res = a * b;
        printf("%f", res);
    } else if (op == "/"){
        res = a / b;
        printf("%f", res);
    }


}
