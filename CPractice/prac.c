#include <stdio.h>

float testScore(float num1, float num2)
{
    float testScoreDivide = num1 / num2;
    float testGrade= testScoreDivide * 100;
    return testGrade;
} //end testScore function

int main()
{
    float userScore, totalScore;

    printf("Enter a test score: ");
    scanf("%f", &userScore);

    printf("Enter total points on test: ");
    scanf("%f", &totalScore);

    float percentage = testScore(userScore, totalScore);
    printf("Percentage achieved: %lf \n", percentage);

    printf("******\n");
    printf("Welcome to Reno's Program.\n");
    printf("******\n");
}