#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    /*
    IF STATEMENTS
    */
    int isStudent = 0;
    int isSmart = 0;

    if (isStudent != 0 && isSmart != 0) {
        printf("You are a student \n");
    } else if (isStudent != 0 && isSmart == 0) {
        printf("You are not a smart student \n");
    } else {
        printf("You are not a student & not smart \n");
    }

    printf("\n"); //prints new line
    
    // < - less than
    // <= - less than or equal to
    // > - greater than
    // >= - greather than or equal to
    // != - does not equal
    // == - equals

    if (1 > 3){
        printf("Number comparison was true \n");
    } else {
        printf("Number comparison was false \n");
    }

    printf("\n"); //prints new line

    if ('a' < 'b') {
        printf("Character comparison was true \n");
    } else {
        printf("Character comparison was false \n");
    }

    printf("\n"); //prints new line

    /*
    SWITCH STATEMENTS
    */
    char myGrade = 'F';

    switch (myGrade){
    case 'A':
        printf("You pass \n");
        break;
    case 'F':
        printf("You fail \n");
        break;
    default:
        printf("Invalid grade \n");
        break;
    }

    printf("\n"); //prints new line

    /*
    WHILE LOOPS
    */
    int index = 1;

    // while (index <= 5) {
    //     printf("%d \n", index);
    //     index++;
    // }

    do {
        printf("%d \n", index);
        index++;
    } while (index <= 5);

    printf("\n"); //prints new line

    /*
    FOR LOOPS
    */

    for (int i = 0; i < 5; i++) {
        printf("%d \n", i);
    }
    
    return 0;
}