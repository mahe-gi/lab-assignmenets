

#include <stdio.h>

void reverse_three_digit_number();
void studentMarksresult();
void numbertodays();
void calculateTvProfit();
int main()
{

    calculateTvProfit();

    return 0;
}

// 1)Write a 'C' program to reverse the given 3 digit number without using control statments.
// --------

// Sample input : int a = 123;
// Sample Output : reverse =  321

void reverse_three_digit_number()
{

    int number = 123;
    int lastnumber = number % 10;                   // lastnumber
    number = number / 10;                           // removers last
    lastnumber = (lastnumber * 10) + (number % 10); // lastnumber
    number = number / 10;
    lastnumber = (lastnumber * 10) + number;
    printf("%d\n", lastnumber);
}

// ============================

// 2) Write a 'C' program to take the marks of a student in 5 subjects as input and determine how many subjects have marks greater than or equal to 35 and how many have marks less than 35.
// -------  The program should not use any control statements (if, else, switch, etc.) or the ternary operator.

// Sample input : int sub1 = 38, sub2 = 34, sub3 = 35, sub4 = 78, sub5 = 20
// Sample Output : Pass in 3 subject and fail in 2 subject.

void studentMarksresult()
{

    int sub1 = 0, sub2 = 0, sub3 = 0, sub4 = 0, sub5 = 0;
    int Pass = 0;
    int fail = 0;

    printf("enter marks of student of each subject : ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    sub1 >= 35 && Pass++;
    sub2 >= 35 && Pass++;
    sub3 >= 35 && Pass++;
    sub4 >= 35 && Pass++;
    sub5 >= 35 && Pass++;

    printf("Pass in %d subject and fail in %d subject.\n", Pass, 5 - Pass);
}

// ============================

// 3): Write a 'C' program to take the number of days and convert into (days:months:years)
// --------

// Sample input : int days = 500

// Sample Output :  1 year 4 month and 15 days.

void numbertodays()
{

    int number = 500;

    int years = 0, months = 0, days = 0;

    years = (number / 365);
    months = (number % 365) / 30;
    days = (number % 365) % 30;

    printf("years  = %d months = %d days =%d \n", years, months, days);
}

// =============================

// 4)A shopkeeper buys a TV set for Rs. 3500 and sells it at a profit of 27%. Apart from this a VAT of 12.7% and Service Charge is 3.87% is charged.
// -------  Write a C program to Display total selling price, profit along with vat and service charge.
//          To calculate the selling price, profit, VAT, and service charge, follow these steps:

//          1) Calculate the selling price:

//             Selling Price = Cost Price + Profit

//             Selling Price = Rs. 3500 + (27% of Rs. 3500)

//          2) Calculate the profit:

//             Profit = Selling Price - Cost Price

//          3) Calculate VAT:

//             VAT = 12.7% of Selling Price

//          4) Calculate Service Charge:

//             Service Charge = 3.87% of Selling Price

void calculateTvProfit()
{

    int costprice = 3500;
    int sellingPrice = 0;
    float perc = costprice * (27.0 / 100);
    sellingPrice = costprice + perc;
    printf("actual price   : %d\n", costprice);
    printf("selling price  : %d\n", sellingPrice);
    printf("total profit   : %d\n", sellingPrice - costprice);
    printf("VAT            : %d\n", (int)(sellingPrice * (12.7 / 100)));
    printf("Service Charge : %d\n", (int)(sellingPrice * (3.8 / 100)));
}
