#include <stdio.h>
#include <stdlib.h>

struct Student {
    int age;
    double gpa;
    char grade;
};

int main(int argc, const char * argv[]) {

    struct Student student1;
    student1.age = 28;
    student1.gpa = 4.0;
    student1.grade = 'A';
    
    printf("%d \n", student1.age);
    printf("%lf \n", student1.gpa);
    printf("%c \n", student1.grade);

    return 0;
}