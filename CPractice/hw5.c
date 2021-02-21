#include <stdio.h>
#include <stdlib.h>

float gas(float num) {
    float gasCost = 1.7199;
    float gallons = num / (gasCost);
    return gallons;
}

int main(){
    int gasMoney;
    printf("Enter amount of money for gas: $");
    scanf("%d", &gasMoney);

    float amntGallons = gas(gasMoney);

    printf("You will get %f gallons of gas\n", amntGallons);
    printf("You car will travel %f miles\n", amntGallons * 24.75); //assuming car gets 24.75 miles per gallon

    return 0;
}

// float distance(float num) {
//     float car = 24.75;
//     float distance = car * num;
//     printf("Gallons: %.2f\n", num);
//     return distance;
// }

// int main(int argc, const char *argv[]) {
//     float d = distance(3.75);
//     printf("Your vehicle traveled %.2f miles\n", d);
//     return 0;
// }

// float average(float num1, float num2, float num3) {
//     printf("Your 3 numbers: %f, %f, %f\n", num1, num2, num3);

//     float sum = num1 + num2 + num3;
//     float ave = sum / 3;

//     return ave;
// }

// int main(int argc, const char *argv[]) {
//     float ave = average(5, 12, 8);
//     printf("The average of your numbers is: %f\n", ave);
//     return 0;
// }

// void message() {
//    printf("Welcome!\n");
//    printf("You are entering my program!\n");
// }

// int main(int argc, const char * argv[]) {
//    message();

//    return 0;
// }

//SUBLIME TEXT ANSWERS

// HW #5

// 1.)

// void message()
// {
//     printf("Welcome!\n");
//     printf("You are entering my program!\n");
// }

// int main()
// {
//     message();
//     return 0;
// }

// 2.)

// float average(float num1, float num2, float num3)
// {
//     printf("Your 3 numbers: %f, %f, %f", num1, num2, num3);

//     float sum = num1 + num2 + num3;
//     float ave = sum / 3;

//     return ave;
// }

// int main()
// {
//     float ave = average(5, 12, 8);
//     printf("The average of your numbers is: %f", ave);
//     return 0;
// }

// 3.)

// float distance(float num)
// {
//     float car = 24.75;
//     float distance = car * num;
//     printf("Gallons: %.2f ", num);
//     return distance;
// }

// int main()
// {
//     float d = distance(3.75);
//     printf("Your vehicle traveled %.2f miles", d);
//     return 0;
// }

// 4.) 

// float gas(float num)
// {
//     float gasCost = 1.7199;
//     float gallons = num / (gasCost);
//     return gallons;
// }

// int main()
// {
//     float amntGallons = gas(5);
//     printf("You will get %f gallons of gas", amntGallons);
//     return 0;
// }

// 5.)

// USING CODE FROM QUESTION #4

// int main()
// {
//     int gasMoney;
//     printf("Enter amount of money for gas: $");
//     scanf("%d", &gasMoney);

//     float amntGallons = gas(gasMoney);

//     printf("You will get %f gallons of gas", amntGallons);
//     printf("You car will travel %f", amntGallons * 24.75); //assuming car gets 24.75 miles per gallon

//     return 0;
// }