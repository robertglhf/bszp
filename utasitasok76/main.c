#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

    int main()
    {
        int n,m,sum1=0,sum2=0,i;
        printf("elso szam : ");
        scanf("%d",&n);
        printf("masodik szam : ");
        scanf("%d",&m);
        for(i=1; i<=n/2 ; i++)
        {
            if(n%i==0)
                sum1+=i;
        }
        for(i=1; i<m/2 ; i++)
        {
            if(m%i==0)
                sum2+=i;
        }
        printf("%i", sum1);
        if(n==sum2 && m==sum1)
            printf("\n A szamok baratsagosak");
        else
            printf("\n A szamok nem baratsagosak");
    }

