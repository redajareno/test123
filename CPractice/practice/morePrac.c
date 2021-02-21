#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{

    /*
    CASTING
    */
    printf("CASTING: \n");

    printf("%d \n", (int) 3.14);
    printf("%f \n", (double) 3 / 2);

    printf("\n"); //prints new line

    /*
    POINTERS
    */
    printf("POINTERS: \n");

    int num = 10;
    printf("%p \n", &num); //prints pointer

    int *pNum = &num;
    printf("%p \n", pNum);
    printf("%d \n", *pNum); //prints num = 10

    printf("\n"); //prints new line

    /*
    NUMBERS
    */
    printf("NUMBERS: \n");

    printf("%d \n", 2 * 3); //arithmetic: +, -, /, *
    printf("%d \n", 10 % 3); //modulus operation
    printf("%d \n", 1 + 2 * 3); //order of operations
    printf("%f \n", 10 / 3.0); //int's & doubles

    int num1 = 11;
    num1 += 100;    // +=, -=, /=, *=
    printf("%d \n", num1);

    num1++;
    printf("%d \n", num1);

    return 0;
}