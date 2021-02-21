#include <stdio.h>
#include <stdlib.h>

int swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return temp;
} // end swap function

int main(int argc, const char *argv[])
{

    int innum1, innum2;

    printf("Enter two integers: \n");
    scanf("%d", &innum1);
    scanf(" %d", &innum2);

    printf("\nBefore swap: %d, %d\n", innum1, innum2); //User #s before swap

    if (innum2 < innum1)
    {                                         //Check: if innum2 < innum1
        int numSwap = swap(&innum1, &innum2); //swap #s
        printf("\nAfter swap: %d, %d\n", innum1, innum2);
    }
    else
    { //innum1 > innum2 do not swap
        printf("\nNo swap: %d, %d\n", innum1, innum2);
    }

    // int a = 5;
    // int b = 4;
    // int c = 2;

    // int *x;
    // int *y;
    // int *z;

    // printf("Address of a is: %p \n", &a);
    // printf("Address of b is: %p \n", &b);
    // printf("Address of c is: %p \n", &c);

    // printf("\n--------------------\n\n");

    // printf("[BEFORE] Address of x is: %p \n", &x);
    // x = &b; //x is assigned to address b
    // printf("[AFTER] Address of x assigned to b: %p \n", x);

    // printf("\n");

    // printf("[BEFORE] Address of y is: %p \n", &y);
    // y = &a; //y is assigned to address a
    // printf("[AFTER] Address of y assigned to a: %p \n", y);

    // printf("\n");

    // printf("[BEFORE] Address of z is: %p \n", &z);
    // z = &c; //z is assigned to address c
    // printf("[AFTER] Address of z assigned to c: %p \n", z);

    // printf("\n--------------------\n\n");

    // printf("value of x is %d \n", *x); //x -> b = 4
    // printf("value of y is %d \n", *y); //y -> a = 5
    // printf("value of z is %d \n", *z); //z -> c = 2

    // printf("\n--------------------\n\n");

    // *y = 25;

    // printf("value of y is %d \n", *y); //y -> a = 25

    // z = x;

    // printf("value of z is %d \n", *z); //z -> b = 4

    // printf("\n--------------------\n\n");

    // printf("new values: \n");
    // printf("value of x is %d \n", *x); //x -> b = 4
    // printf("value of y is %d \n", *y); //y -> 25
    // printf("value of z is %d \n", *z); //z -> 4

    // x = &c;

    // printf("%p\n", x);
    // printf("%p\n", &c);

    // printf("\n");

     // printf("x old value: %p\n", x);
    // printf("%p\n", y);
    // printf("%p\n", &a);

    // x = y;

    // printf("value of x: %p\n", x);
    // printf("value of y: %p\n", y);

    return 0;
}
