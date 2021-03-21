#include <stdio.h>
#include <stdlib.h>
#include "factorial.h"
#include "readline.h"

int main()
{
   char input[50];
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("./data.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
   printf("Enter 2 times to finish input stage\n");
while (1 == scanf("%[^\n]%*c", input)) {
    fprintf(fptr,"%s\n",input);
   }
   fclose(fptr);

   FILE* f = fopen("./data.txt", "r");
    char str[50];
    int line = 1;
    if (f == NULL) {
    printf("File not found\n");
    return 0;
    }
    
    while (fscanf(f, "%[^\n]\n", str) == 1) {
    if (read_line(str) != 0)
    {
        size_t big_digit = 0;
        sscanf(str, "%zu%*c",&big_digit);
        int a = factorial(big_digit);
        printf("LINE %d: %d\n", line, a);
    }
    else{
    	printf("LINE %d: -1\n", line);
    }
    line++;
    }
fclose(f);

   return 0;
}
