#include <stdio.h>
 
int main()
{
    int X[6] = {25, 14, 54, 65, 12, 8};
    int *Xptr = &X[0];
    int Y;
 
    // printf("%p\n", Xptr); //address of Xptr pointing to X[0]
    // printf("%p\n", &X[0]); //address of X[0]

    printf("BEFORE:\n");
    for(int i = 0; i < 6; i++) {
        printf("%d ", X[i]);
    }
 
    printf("\n");
 
    //*Xptr = 6; // a) assign 6 to index @ X[0]
    //*X = 3; // b) dereference X[0] to 3
    //X[3] = 24; // c) assign 24 to index @ X[3]
    //Xptr[4] = 3; // d) assign 3 to index @ X[4]
    //*(X + 4) = 2; // e) assign 2 to index X[4]
    //*(Xptr + 3) = 32; // f) assign 32 to index X[3]
    //Xptr += 3; // g) Xptr is point to index X[3]
    Xptr++; // Xptr is pointing to index X[1]
    Y = Xptr - X; //

    printf("AFTER:\n");
    for(int i = 0; i < 6; i++) {
        printf("%d ", X[i]);
    }

    printf("%d\n", Y);

    printf("\n");

    return 0;
}