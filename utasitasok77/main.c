#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k, input;
    int i=1,s1=0,s2=0;
    printf("adja meg a max szamot: \n");
    scanf("%i", &input);
    for(k=1; k<=input; k++)
    {
        n=k;
        while(i<n)
        {
            if(n%i==0)
                s1=s1+i;
            i++;
        }

        i=1;

        if(s1==n)
            continue;

        while(i<s1)
        {
            if(s1%i==0)
                s2=s2+i;
            i++;
        }

        if(n==s2)
            printf("%d \n",n);

        s1=0;
        s2=0;
    }
}
