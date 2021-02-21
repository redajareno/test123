#include <stdio.h>
#include <stdlib.h>

/**
* Programmer: Reno Redaja
* Date of Creation: September 6, 2020
* Current Date Editing: September 23, 2020
* Class: ICS-212-0 [WIN.60187.FA20]
* 
* Project #1
* 
* This is a simple program that calculates the user's (YOU) total amount of money
* made over the past year. The program will ask you to input how many jobs you have
* worked within a year. This program will allow the user to enter up to 2 jobs.
* It will then ask you for your gross income.From there it will calculate and print your
* net income along with federal and state taxes based on how much you have made.
* 
* Federal Tax: 8.5%
* State Tax: 14.5%
**/

///Variables///

int gIncome, gIncome2;        //Gross income
const float fedTax = 0.085;   //Federal Tax
const float stateTax = 0.145; //State Tax

///Functions///

//Calculates the Net Income of user.
int netIncomeNum(int userIn1)
{
    float netIncome = (int)userIn1 * (1 - (fedTax + stateTax)); //Gross income * (1 - (Federal Tax + State Tax))
    return netIncome;
} // end netIncomeNum function

//Calculates the State Tax of user.
int stateTaxFunc(int userIn2)
{
    float stateTaxNum = (int)userIn2 * stateTax; //Gross income * State Tax
    return stateTaxNum;
} // end stateTaxNum function

//Calculates the Federal Tax of user.
int fedTaxFunc(int userIn3)
{
    float fedTaxNum = (int)userIn3 * fedTax; //Gross income * Federal Tax
    return fedTaxNum;
} // end fedTaxNum function

//Calculates the income of user depending on how many jobs worked.
int numOfJobs(int num)
{

    switch (num)
    {
    case 0:
        printf("You have not worked. \n");
        break; // end case 0
    case 1:
        printf("Enter your Gross Income: $");
        scanf("%d", &gIncome);

        printf("\n"); //prints new line

        float FTax = fedTaxFunc(gIncome);
        float STax = stateTaxFunc(gIncome);
        float NIncome = netIncomeNum(gIncome);

        if (gIncome == 0)
        {
            printf("Error: You have no income. \n");
        }
        else if (gIncome < 0)
        {
            printf("Error: Cannot have negative income. \n");
        }
        else
        {
            printf("Total Gross Income: $%d \n", gIncome);
            printf("Federal Tax (8.5%%): $%.2f \n", FTax);
            printf("State Tax (14.5%%): $%.2f \n", STax);
            printf("Total Taxes Paid: $%.2f \n", FTax + STax);
            printf("Net Income: $%.2f \n", NIncome);
        }
        break; //end case 1
    case 2:
        printf("Enter your (1st) Gross Income: $");
        scanf("%d", &gIncome);
        printf("Enter your (2nd) Gross Income: $");
        scanf("%d", &gIncome2);

        printf("\n"); //prints new line

        int gIncomeSum = gIncome + gIncome2;

        float FTax2 = fedTaxFunc(gIncomeSum);
        float STax2 = stateTaxFunc(gIncomeSum);
        float NIncome2 = netIncomeNum(gIncomeSum);

        if (gIncomeSum == 0)
        {
            printf("Error: You have no income. \n");
        }
        else if (gIncomeSum < 0)
        {
            printf("Error: Cannot have negative income. \n");
        }
        else
        {
            printf("Total Gross Income: $%d \n", gIncomeSum);
            printf("Federal Tax (8.5%%): $%.2f \n", FTax2);
            printf("State Tax (14.5%%): $%.2f \n", STax2);
            printf("Total Taxes Paid: $%.2f \n", FTax2 + STax2);
            printf("Net Income: $%.2f \n", NIncome2);
        }
        break; //end case 2
    default:
        if (num >= 3)
        {
            printf("Don't overwork yourself :] \n");
        }
        else
        {
            printf("Error: Enter the number of jobs worked. \n");
        }
        break; //end default case
    }          //end switch statement

    return num; //returns number of jobs with income value

} //end numOfJobs function

///Main///

int main(int argc, const char *argv[])
{

    //Variables
    int jobs; //job variable

    //Ask user how many jobs they have worked
    printf("%s", "Enter numbers of jobs worked: "); //prompt
    scanf("%d", &jobs);                             //number of jobs entered from user

    printf("\n"); //prints new line

    //Asks how many jobs you have work & calculates your gross & net income and federal & state taxes.
    int sumOfJobs = numOfJobs(jobs);

    return 0;

} //end main