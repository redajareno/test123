#include <stdio.h>
#include <stdlib.h>

/**
* Programmer: Reno Redaja
* Date of Creation: September 6, 2020
* Due Date: October 17, 2020 @ 11:55PM
* Class: ICS-212-0 [WIN.60187.FA20]
* 
* Project #1
* 
* This is a simple C program that calculates the user's total amount of money
* made over the past year. The program will ask you to input how many jobs you have
* worked within a year. It will then ask you for your gross income. If you enter a negative
* income the program will print out and error as it checks for this. From there it will calculate 
* and print your net income along with federal and state taxes based on how much you have made.
*
* 
* Loop Type: (FOR Loop)
* I chose to use the for loop in this program as it effective in repeatedly asking the user
* for the income amount, especially if more than one, and adds them all together. I feel that
* with the FOR loop it can meet the condition for this prompt as it is concise & effective.
*
* 
* OUTPUT (3 SAMPLE RUNS):
*
* 1.) This first sample is when the user enters 1 job worked.
* 
* Enter numbers of jobs worked: 1
* Enter income for job(s): $20000
*
* Federal Tax (8.5%): $1700.00 
* State Tax (14.5%): $2900.00 
* Total Taxes Paid: $4600.00 
* Net Income: $15400.00 
*
* 2.) This second sample is when the user enters 3 job worked.
* 
* Enter numbers of jobs worked: 3
* Enter income for job(s): $20000
* Enter income for job(s): $20000
* Enter income for job(s): $45000
* 
* Federal Tax (8.5%): $7225.00 
* State Tax (14.5%): $12325.00 
* Total Taxes Paid: $19550.00 
* Net Income: $65450.00 
*
* 3.) This third sample is when the user enters 2 jobs with a negative income.
* 
* Enter numbers of jobs worked: 2
* Enter income for job(s): $-14599
* Enter income for job(s): $900
* 
* Error: No income and/or cannot enter negative amount.
*  
**/

///Functions///
int netIncomeNum(int userIn);
int taxesPaidNum(int userIn);
int stateTaxFunc(int userIn);
int fedTaxFunc(int userIn);
void calcIncome(int num);
void numOfJobs();

///Main///
int main(int argc, const char *argv[]) {
    numOfJobs(); //Start program: ask user how many jobs worked.

    return 0;
} //end main

///Variables///
const float fedTax = 8.5 / 100;    //Federal Tax: 8.5%
const float stateTax = 14.5 / 100; //State Tax: 14.5%

///Functions///

int netIncomeNum(int userIn) { //Calculates the Net Income of user.
    float netIncome = (int)userIn * (1 - (fedTax + stateTax)); //Gross income * (1 - (Federal Tax + State Tax))
    return netIncome;
} // end netIncomeNum function

int taxesPaidNum(int userIn) { //Calculates Taxes paid of user.
    float taxesPaidNum = (int)userIn * (fedTax + stateTax); //Gross income * (Federal Tax + State Tax)
    return taxesPaidNum;
} // end taxesPaidNum function

int stateTaxFunc(int userIn) { //Calculates the State Tax of user.
    float stateTaxNum = (int)userIn * stateTax; //Gross income * State Tax
    return stateTaxNum;
} // end stateTaxNum function

int fedTaxFunc(int userIn) { //Calculates the Federal Tax of user.
    float fedTaxNum = (int)userIn * fedTax; //Gross income * Federal Tax
    return fedTaxNum;
} // end fedTaxNum function

void calcIncome(int num) { //Calculates the income of user depending on how many jobs worked.
    int gIncome, gIncomeTotal; //Gross income

    for (int i = 1; i <= num; i++) {
        printf("Enter income for job(s): $");
        scanf("%d", &gIncome);
        gIncomeTotal = gIncomeTotal + gIncome;
    }

    float FTax = fedTaxFunc(gIncomeTotal);
    float STax = stateTaxFunc(gIncomeTotal);
    float NIncome = netIncomeNum(gIncomeTotal);
    float TPaid = taxesPaidNum(gIncomeTotal);

    printf("\n"); //prints new line

    //Check if users income is 0 or a negative amount inputted.
    if (gIncomeTotal <= 0) {
        printf("Error: No income and/or cannot enter negative amount.\n");
    } else {
        printf("Federal Tax (8.5%%): $%.2f \n", FTax);
        printf("State Tax (14.5%%): $%.2f \n", STax);
        printf("Total Taxes Paid: $%.2f \n", TPaid);
        printf("Net Income: $%.2f \n", NIncome);
    } // end if/else statement
} // end calcIncome function

void numOfJobs() { //Asks how many jobs the user has worked.
    int jobs;

    //Ask user how many jobs they have worked
    printf("%s", "Enter numbers of jobs worked: "); //prompt
    scanf("%d", &jobs);                             //number of jobs entered from user

    if (jobs <= 0) { //Check if user has entered 0 or negative integers.
        printf("You have not worked and/or cannot enter negative numbers. \n");
    } else {
        //Calculates your net income, federal taxes, state taxes & taxes paid.
        calcIncome(jobs);
    } // end if/else statement
} // end numOfJobs function