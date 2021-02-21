#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {

   int age;
   printf("Please enter your age: "); //Ask user for age input
   scanf("%d", &age);                 //Stores users age input
  
   printf("\n"); //print new line

   int alive = age * 365;             //Calculates how many days person has been alive
   printf("You have been alive for %d days. \n", alive); //Prints how many days been alive

   //Prints message based on how old they are.
   if (alive > 18251) {
       printf("Retired, hopefully \n");
   } else if (alive > 14601) {
       printf("Getting upthere \n");
   } else if (alive > 10951) {
       printf("Mid-life Crisis \n");
   } else if (alive > 6751) {
       printf("Adult \n");
   } else if (alive > 3501) {
       printf("Young Adult \n");
   } else {
       printf("Child \n");
   }
  
   return 0;
}