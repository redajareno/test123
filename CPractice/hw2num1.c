#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
   int num;
   printf("Enter a number: "); //Ask user for integer
   scanf("%d", &num);          //Store user input

   if (num % 2 == 0)           //If input equals 0, true (EVEN). If input does not equal 0, false (ODD).
   {
       printf("The number you have entered is EVEN. \n");
   }
   else
   {
       printf("The number you have entered is ODD. \n");
   }
   return 0;
}