#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[1000];
    printf("Adjon meg egy karakterlancot: ");
    scanf("%s", &input);
    palindrom(input);

    return 0;
}

void palindrom(char input[]){
    int i = 0;
    int j = strlen(input) - 1;

    while (j > i){
        if (input[i++] != input[j--]){
            printf("%s nem azonos forditottjaval \n", input);
            return;
        }
    }
    printf("%s azonos forditottjaval \n", input);
}
