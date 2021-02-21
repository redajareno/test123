#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    // //USER INPUT FOR NAME
    // char name[10];
    // printf("Enter your name: ");
    // fgets(name, 10, stdin);
    // printf("Hello %s \n", name);

    // //INTEGER INPUT
    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);
    // printf("You are %d \n", age);

    //CHAR INPUT
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("You got an %c on the test \n", grade);

    // //DOUBLE INPUT
    // double gpa;
    // printf("Enter your gpa: ");
    // scanf("%lf", &gpa);
    // printf("Your gpa is %f \n", gpa);



    return 0;
}