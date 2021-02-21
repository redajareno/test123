#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    char testGrade = 'A';   //single 8-bit character
    char name[] = "Reno";   //array of characters

    short age0 = 10;        //at least 16-bits signed integer
    int age1 = 20;          //at least 16-bits signed integer (not smaller than short)
    long age2 = 30;         //at least 32-bits signed integer
    long long age3 = 40;    //at least 64-bits signed integer

    float gpa0 = 2.5;       //single-precision floating point
    double gpa1 = 3.5;      //double-precision floating point
    long double gpa2 = 3.5; //exteneded-precision floating point

    int isTall;             //0 if false, non-zero if true (BOOLEAN)

    testGrade = 'F';

    printf("%s, your grade is %c. \n", name, testGrade);
    
    return 0;

}