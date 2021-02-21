#include <stdio.h>

int main() {

	int a;
	int *p;

    a = 10;
    p = &a; // &a = address of a
    printf("a = %d\n", a); // a is assigned to 10
    *p = 12; // dereferencing
    printf("a = %d\n", a); // since *p is dereferencing a, it is assigned to 12

    printf("\n"); // prints new line

	printf("address of p: %p\n", p);  // p points to adress of a
    printf("value of p: %d\n", *p); // *p - value at address pointed by p, 12
    printf("address of a: %p\n", &a); // address of a

    //////////////////////////////////////////////////

    // int a;
    // int *p;
    // a = 10;
    // p = &a; // &a = address of a
    // printf("Address of P is %p\n", p); //address of p points to address of a
    // printf("Value at p is %d\n", *p); //prints value of p, 10
    // int b = 20;
    // *p = b; // dereferencing p to b, p -> 20
    // printf("Address of P is %p\n", p); //address of p points still pointing to address of a
    // printf("Value at p is %d\n", *p);  //prints value of p, 20

    //////////////////////////////////////////////////

    // int a = 10;
    // // int *p = &a; // same as, p = &a
    // int *p;
    // p = &a;

    // // Pointer arithmetic
    // printf("Address p is: %p\n", p); // p is 2002
    // printf("size of integer is %lu bytes\n", sizeof(int));
    // printf("Address p + 1 is: %p\n", p + 1); // p is 2006, since size of int is 4.. 2006

    //////////////////////////////////////////////////

    // int a = 1025;
    // int *p;
    // p = &a;
    // printf("size of integer is %lu\n", sizeof(int)); // prints, size of integer is 4
    // printf("Address = %p, value = %d\n", p, *p);     // prints, Address = 0x7ffeeddfe91c, value = 1025
    // printf("Address = %p, value = %d\n", p + 1, *(p + 1)); //prints, Address = 0x7ffeee935920, value = -292333264

    // char *p0;
    // p0 = (char*)p; // typecasting
    // printf("size of char is %lu\n", sizeof(char)); // prints, size of char is 1
    // printf("Address = %p, value = %d\n", p0, *p0); // prints, Address = 0x7ffeeddfe91c, value = 1
    // printf("Address = %p, value = %d\n", p0 + 1, *(p0 + 1)); // prints, Address = 0x7ffeee93591d, value = 4
    // // 1025 = 00000000 00000000    000001      00000001
    // //                          4 in binary  1 in binary

    /////////////////////////////////////////////////

    // int a = 1025;
    // int *p;
    // p = &a;
    // printf("size of integer is %lu\n", sizeof(int)); // prints, size of integer is 4
    // printf("Address = %p, value = %d\n", p, *p);     // prints, Address = 0x7ffeeddfe91c, value = 1025
    
    // // Void pointer - Generic pointer
    // void *p0;
    // p0 = p;
    // printf("Address = %p\n", p0); // only print address of p0, no value
    // printf("Address = %p\n", p0+1); // only print address of p0, no value
}