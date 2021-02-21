#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    /*
    ARRAYS
    */
    printf("Arrays: \n");

    int luckyNum[] = {4, 8, 15, 16, 23, 42};
    luckyNum[0] = 90;
    printf("%d \n", luckyNum[0]); //prints 90
    printf("%d \n", luckyNum[1]); //prints 8

    printf("\n"); //prints new line

    /*
    N DIMENSIONAL ARRAYS
    */
    printf("N Dimensional Arrays: \n");

    //int numberGrid[2][3];
    int numberGrid[2][3] = { {1, 2, 3}, {4, 5, 6} };
    numberGrid[0][1] = 99;
    printf("%d \n", numberGrid[0][0]); //prints 1
    printf("%d \n", numberGrid[0][1]); //prints 99

    return 0;
}