#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    /*
    * HW#3 Question 1.)
    * 
    * Write a short program that asks the user for an integer. 
    * Then ask the user for a letter.
    * Print out the letter followed by the integer.
    */

    //Variables
    int num;
    char letter;

    printf("Hello, please enter an integer: "); //Ask user for interger
    scanf("%d", &num);                          //Store user integer input

    printf("Enter a letter: "); //Ask user for letter
    scanf(" %c", &letter);      //Store user letter input

    printf("\n"); //Prints new line

    printf("The letter you entered was:  %c\n", letter); //Prints out letter followed by integer
    printf("The number you entered was:  %d \n", num);   //Prints out letter followed by integer

    return 0;
}