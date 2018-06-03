#include <stdio.h>
#include <stdlib.h>

void counter(int num, int n) {
    int m;
    int i, freq=0;

       while ( num != 0 )
        {
            m=num%10;
            if (m == n)
                freq++;
            num=num/10;
        }

       printf("a keresett szamjegy %ix  fordul elo", freq);

}

int main()
{
    int num, n;
       printf("Adjon meg egy szamot: ");
       scanf("%i", &num);

       printf("Adja meg a keresett szamjegyet: ");
       scanf("%i",&n);

       counter(num, n);
}
