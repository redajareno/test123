#include <stdio.h>
#include <string.h>

/**
1.) Declare a string using the pointer notation.  Initialize to the value “EMPTY”.

char *c = "EMPTY";

2.) Declare an array of characters.  This array will be 10 cells large. Initialize to any combination of upper-case alpha-characters.

char str[] = {'A', 'E', 'I', 'O', 'U', 'R', 'G', 'B', 'Y', 'Q'};

3.) Using the array in question 2 above, write a module that converts all upper-case values to lower case.  Assume that the array holds only alpha-characters, and that they are all upper case. (Subtract 32 from the upper case)

void toLowerCase(char c[]) {
    int len;
    len = strlen(c);

    for (int i = 0; i < len; i++) {
        if(c[i] >= 'A' && c[i] <= 'Z') {
            c[i] = c[i] + 32;
        }
    }
}
*/

void toLowerCase(char c[]) {
    int len;
    len = strlen(c) - 1;

    for (int i = 0; i < len; i++) {
        if(c[i] >= 'A' && c[i] <= 'Z') {
            c[i] = c[i] + 32;
        }
    }
}

int main() {

    // char *c = "EMPTY";
    // //         01234

    // printf("%s\n", c); // prints, EMPTY
    // printf("%c\n", *(c)); // prints, E
    // printf("%c\n", *(c + 1)); // prints, M
    // printf("%c\n", *(c + 2)); // prints, P
    // printf("%c\n", *(c + 3)); // prints, T
    // printf("%c\n", *(c + 4)); // prints, Y

    // printf("\n"); // prints new line

    char str[] = {'A', 'E', 'I', 'O', 'U', 'R', 'G', 'B', 'Y', 'Q'};

    int len;
    len = strlen(str);
    printf("%d\n", len - 1);

    printf("Before:\n");

    for (int j = 0; j < 10; j++){
        printf("%c ", str[j]);
    }

    printf("\n");

    toLowerCase(str);

    printf("After:\n");
    for (int j = 0; j < 10; j++) {
        printf("%c ", str[j]);
    }

    printf("\n");

    return 0;
}