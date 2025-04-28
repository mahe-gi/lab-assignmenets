

#include <stdio.h>
int results();
int daystocal();
int sectotime();
int tvprofit();
int BookWorld();

int main()
{
    // results();
    // daystocal();
    // sectotime();
    // tvprofit();
    // BookWorld();
    BookWorld();
}

// 1)Write a 'C' program to take the marks of a student in 5 subjects as input and determine how many subjects have marks greater than or equal to 35 and how many have marks less than 35.
// -------  The program should not use any control statements (if, else, switch, etc.) or the ternary operator.

// Sample input : int sub1 = 38, sub2 = 34, sub3 = 35, sub4 = 78, sub5 = 20
// Sample Output : Pass in 3 subject and fail in 2 subject.
int results()
{

    int pass = 0;
    int sub1, sub2, sub3, sub4, sub5;
    printf("Enter 5 subjects marks with space : \n");

    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    sub1 >= 35 && pass++;
    sub2 >= 35 && pass++;
    sub3 >= 35 && pass++;
    sub4 >= 35 && pass++;
    sub5 >= 35 && pass++;

    printf("Pass in %d subject and fail in %d subject.", pass, 5 - pass);
    return 0;
}
// ========================================================================================================

// Que 2 : Write a 'C' program to take the number of days and convert into (days:months:years)
// --------

// Sample input : int days = 500

// Sample Output :  1 year 4 month and 15 days.

int daystocal()
{

    int days = 500;

    printf(" %d year %d month and %d days.\n", days / 365, (days % 365) / 30, (days % 365) % 30);
    return 0;
}

// ========================================================================================================

// Que 3 : Write a 'C' program to take the number of seconds and convert into (H:M:S)
// --------

// Sample input : int seconds = 3665

// Sample Output :   1 hour 1 minute and 5 second

int sectotime()
{

    int seconds = 3665;

    printf("%d hour %d minute and %d second \n", (seconds / 60) / 60, (seconds / 60) % 60, seconds % 60);
    return 0;
}

// ========================================================================================================

// Que 4 : A shopkeeper buys a TV set for Rs. 3500 and sells it at a profit of 27%. Apart from this a VAT of 12.7% and Service Charge is 3.87% is charged.
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

int tvprofit()
{

    int price = 3500;
    int profit = price * ((float)27 / 100); // profit
    int sellingprice = profit + price;
    int vat = sellingprice * ((float)12.7 / 100);
    int sevicecharge = sellingprice * ((float)3.87 / 100);
    printf("cost price : %d\n", price);
    printf("selling price : %d\n", sellingprice);
    printf("profit  : %d\n", profit);
    printf("vat  : %d\n", vat);
    printf("service charge  : %d\n", sevicecharge);
    return 0;
}

// ========================================================================================================

// Que 5 : Using ternary operator write a C program for a bookstore named "BookWorld" that calculates the discounted amount based on the total purchase amount.
// ------

// The store provides three types of discounts to its customers:
// -> If the total purchase amount is less than Rs. 1000, there is no discount.
// -> If the total purchase amount is between Rs. 1000 and Rs. 5000 (inclusive), customers get a 5% discount on the total purchase amount.
// -> If the total purchase amount is greater than Rs. 5000, customers get a 10% discount on the total purchase amount.

// Sample input  : purchase amount = 999
// Sample output : total amount = 999

// Sample input  : purchase amount = 2000
// Sample output : total amount including 5% discount = 1900

// Sample input  : purchase amount = 10000
// Sample output : total amount including 10% discount = 9000

int BookWorld()
{

    int purchasedamount = 0;

    printf("enter purchase amount : \n");
    scanf("%d", &purchasedamount);
    int dicount5 = (purchasedamount * (float)5 / 100);
    int dicount10 = (purchasedamount * (float)10 / 100);
    purchasedamount < 1000 && printf("total amount : %d\n", purchasedamount);
    purchasedamount > 1000 && purchasedamount < 5000 && printf("total amount including 5 per discount : %d\n", purchasedamount - dicount5);
    purchasedamount > 5000 && printf("total amount including 10per discount = %d\n", purchasedamount - dicount10);
    return 0;
}
