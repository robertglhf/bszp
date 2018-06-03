#include <stdio.h>
#include <stdlib.h>

//Egy n számról döntsük el, hogy Fibonacci-szám-e!

int main() {
        int fszam, num1 = 0, num2 = 1, temp, bool = 0;

        printf("Adjon meg egy szamot:");
        scanf("%d", &fszam);

        if (fszam == num1 || fszam == num2) {
                printf("%d fibonacci szam\n", fszam);
                return 0;
        }

        while (num2 <= fszam) {
                temp = num2;
                num2 = num1 + num2;
                num1 = temp;
                if (num2 == fszam) {
                        bool = 1;
                        break;
                }
        }

        if (bool) {
                printf("%d fibonacci szam\n", fszam);
        } else {
                printf("%d nem fibonacci szam\n", fszam);
        }
        return 0;
  }
