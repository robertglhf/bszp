#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fa[100], fb[100], fc[100];

    printf("Adjon meg 2 tartalommal rendelkezo file-t: \n");
    scanf("%s%s", &fa,&fb);

    printf("\nAdja meg a harmadik file nevet: \n");
    scanf("%s", &fc);

   // 2 eredeti file megnyitasa
   FILE *fp1 = fopen(fa, "r");
   FILE *fp2 = fopen(fb, "r");

   // ahova masolando file megnyitasa
   FILE *fp3 = fopen(fc, "w");
   char c;

   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("Nem lehetett megnyitni a file-t");
         exit(0);
   }

   // 1 -> 3
   while ((c = fgetc(fp1)) != EOF)
      fputc(c, fp3);

   // 2 -> 3
   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);

   printf("\nSikeres muvelet \n");

    // fileok lezarasa;
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}
