#include <stdio.h>
#include <stdlib.h>

int addNum(int num1, int num2) {
    return num1 + num2;
}

int main(int argc, const char * argv[]) {

    /*
    FUNCTIONS
    */
    printf("Functions: \n");

    int sum = addNum(1, 2);
    printf("The total sum is %d. \n", sum);

    return 0;
}