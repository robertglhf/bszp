#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, szam, sum = 0 ;

    printf("\n Adjon meg egy szamot \n") ;
    scanf("%d", &Number) ;

    for(i = 1 ; i < szam ; i++)
    {
        if(szam % i == 0)
        {
            sum = sum + i ;
        }
    }

    if (sum == szam)
        printf("\n %d tokeletes szam", szam) ;
    else
        printf("\n%d nem tokeletes szam", szam) ;

    return 0 ;
}

