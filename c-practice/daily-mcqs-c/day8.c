#include <stdio.h>
void electricitybill();
void uppercaseTolowercase();
void lowercaseTOuppercase();
void finascii();

int main()
{
    // electricitybill();
    // uppercaseTolowercase();
    // lowercaseTOuppercase();
    finascii();
}

// Que 1 :
// =======

// Write a C program using the ternary operator to calculate the electricity bill for a given number of units consumed by a customer.
// For the first 100 units, the rate is Rs. 3.00 per unit.
// For any additional units beyond 100, the rate is Rs. 4.50 per unit.

// Example 1: Units consumed less than or equal to 100
// Sample Input: units consumed : 75
// Sample Output: The total electricity bill is: Rs. 225.00

// Example 2: Units consumed more than 100
// Sample Input: units consumed: 15 0
// Sample Output: The total electricity bill is: Rs. 525.00

// Example 3: Units consumed exactly 0
// Sample Input: units consumed: 0
// Sample Output: The total electricity bill is: Rs. 0.00

void electricitybill()
{
    int units = 0;
    printf("units consumed : ");
    scanf("%d", &units);
    units <= 100 printf("The total electricity bill is: %.2f\n", units * 3.0) : units == 0 printf("The total electricity bill is: %.2f\n", (float)units)
        : printf("The total electricity bill is: %.2f\n", (100 * 3) + ((units - 100) * 4.5));
}

// ========================================

// Que 2 :
// =======
// Write a program to convert  uppercase Character to Lowercase Character without using ternary operator and control statements.

// Sample Input:-
// 	Enter a Uppercase Character : H
// Output-
// 	Lowercase Character : h
void uppercaseTolowercase()
{

    char uppercase = 0;
    printf("Uppercase Character : ");
    scanf("%c", &uppercase); // 65->A / 97-> a    ->97-65
    printf("Lowercase Character : %c\n", uppercase + 32);
}

// ========================================

// Que 3 :
// =======

// Write a program to convert Lowercase Character to uppercase Character without using ternary operator and control statements.

// Sample Input:-
// 	Enter a Lowercase  Character : a
// Output-
// 	Uppercase Character : A

void lowercaseTOuppercase()
{

    char lowercase = 0;
    printf("Enter a Lowercase Character : ");
    scanf("%c", &lowercase);
    printf("Uppercase Character : %c\n", lowercase - 32);
}

// ========================================

// Que 4 :
// =======

// Write a program to check given character is digit or alphabet or special character.

// Example 1 :
// -----------
// intput : a
// output : alphabet

// Example 2 :
// -----------
// intput : A
// output : alphabet

// Example 3 :
// -----------
// intput : 1
// output : digit

// Example 4 :
// -----------
// intput : @
// output : special character

void finascii()
{

    char inputval = 0;
    printf("input : ");
    scanf("%c", &inputval);
    inputval > 47 && inputval < 58 printf(" digit\n") : (inputval > 64 && inputval) || (inputval > 96 && inputval < 123) printf("alphabet\n")
        : printf("special character\n");
}
