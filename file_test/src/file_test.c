#include <stdio.h>
#include <stdlib.h>
int main()
{
   int num;
   FILE *fptr;
   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("program.txt","w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   fprintf(fptr,"akjsjdaj");
   fclose(fptr);
   return 0;}
