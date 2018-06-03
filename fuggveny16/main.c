#include <stdio.h>
#include <stdlib.h>

void counter(int num, int n) {
    int digit;
    int i, freq=0;

       while ( num != 0 )
        {
            digit=num%10;
            if (digit == n)
                freq++;
            num=num/10;
        }

       printf("a keresett szamjegy %ix  fordul elo", freq);

}

int main()
{
    int num, n;
       printf("irj be egy szamot: ");
       scanf("%i", &num);

       printf("keresett szamjegy: ");
       scanf("%i",&n);

       counter(num, n);
}
