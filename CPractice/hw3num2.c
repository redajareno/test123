// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, const char *argv[]) {
//     /*
//     * HW#3 Question 2.)
//     * 
//     * Write a short program that asks the user for a float and a character. 
//     * Display the character on one line by itself. 
//     * The character should be 3 tabs in from the left.
//     * Print the float 2 lines after the character, 2 tabs in from the left.
//     */

//     //Variables
//     float num;
//     char letter;

//     printf("Hello, please enter an float integer: "); //Ask user for interger
//     scanf("%f", &num);                                //Store user float integer input

//     printf("Enter a letter: "); //Ask user for character
//     scanf(" %c", &letter);      //Store user character input

//     printf("\n");         //print new line

//     /*
//     * print character on one line by itself & 3 tabs in from left
//     * print float 2 lines after character, 2 tabs in from left
//     */
//     printf("The character & float you entered: \n");

//     printf("            %c\n", letter); //print result

//     printf("\n");                     //print new line
//     printf("\n");                     //print new line

//     printf("        %f\n", num);      //print result

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    //Variables
    float num;
    char letter;

    printf("Hello, please enter an float integer: "); //Ask user for interger
    scanf("%f", &num);                                //Store user float integer input

    printf("Enter a letter: "); //Ask user for character
    scanf(" %c", &letter);      //Store user character input

    printf("\n"); //print new line

    /*
   * print character on one line by itself & 3 tabs in from left
   * print float 2 lines after character, 2 tabs in from left
   */
    printf("The character & float you entered: \n");

    printf("            %c\n", letter); //print result

    printf("\n"); //print new line
    printf("\n"); //print new line

    printf("        %f\n", num); //print result

    return 0;
}
