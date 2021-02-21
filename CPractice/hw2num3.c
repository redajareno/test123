#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
  
   int num;
   printf("Enter a number between 1-10 (inclusively): "); //Asks user enter # b/w 1-10
   scanf("%d", &num);  //Stores user input

   //Prints out the integer entered in english.
   switch(num) {
       case 1:
           printf("One \n");
           break;
       case 2:
           printf("Two \n");
           break;
       case 3:
           printf("Three \n");
           break;
       case 4:
           printf("Four \n");
           break;
       case 5:
           printf("Five \n");
           break;
       case 6:
           printf("Six \n");
           break;
       case 7:
           printf("Seven \n");
           break;
       case 8:
           printf("Eight \n");
           break;
       case 9:
           printf("Nine \n");
           break;
       case 10:
           printf("Ten \n");
           break;
       default:
           printf("Please enter a number between 1-10. \n");
   }
  
   return 0;
}