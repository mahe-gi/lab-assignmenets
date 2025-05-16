// 1) Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
// -------
//          Validity Check:
//          If all three sides are equal then the triangle is equilateral.
//          If exactly two sides are equal then the triangle is isosceles.
//          If all sides are different then the triangle is scalene.

// #include <stdio.h>
// int main()
// {
//     int side1, side2, side3;
//     printf("Side 1: ");
//     scanf("%d", &side1);
//     printf("Side 2: ");
//     scanf("%d", &side2);
//     printf("Side 3: ");
//     scanf("%d", &side3);

//     if (side1 == side2 && side2 == side3)
//     {
//         // three sides are equal
//         printf("The triangle is equilateral.\n");
//     }
//     else if (side1 == side2 || side1 == side3 || side2 == side3)
//     {
//         // exactly two sides are equal
//         printf("The triangle is isosceles.\n");
//     }
//     else if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
//     {
//         printf("The triangle is scalene.\n");
//     }
//     else
//     {
//         printf("The triangle is not valid.\n");
//     }
// }

// Sample input :  Enter the lengths of the three sides of the triangle:
//                 Side 1: 3
//                 Side 2: 3
//                 Side 3: 3
// Sample output : The triangle is equilateral.

// Sample input :  Enter the lengths of the three sides of the triangle:
//                 Side 1: 5
//                 Side 2: 5
//                 Side 3: 8
// Sample output : The triangle is isosceles.

// Sample input : Enter the lengths of the three sides of the triangle:
//                 Side 1: 3
//                 Side 2: 4
//                 Side 3: 5
// Sample output : The triangle is scalene.

// Sample input : Enter the lengths of the three sides of the triangle:
//                 Side 1: 1
//                 Side 2: 2
//                 Side 3: 3
// Sample output : The triangle is not valid.

// ==========================================================================================================

// Que 2 : Rajesh bought an old TV for $3500. and Rajesh sold the TV for $7000, which includes a 5% VAT and a 10% tax on the selling price.
// -------  Calculate the net selling price by removing VAT and tax.
//          Determine whether Rajesh made a profit or incurred a loss, and calculate the respective amount.

//          Program Requirements:

//          The program should read the cost price and the total selling price (including VAT and tax).
//          The program should calculate the net selling price by removing VAT and tax.
//          The program should compare the net selling price with the cost price to determine profit or loss.
//          The program should display the amount of profit or loss.

// #include <stdio.h>
// int main()
// {
//     int bprice, sellingprice, taxes;
//     float vat = 0.05, tax = 0.10;

//     printf("Enter the cost price of the TV: ");
//     scanf("%d", &bprice);
//     printf("Enter the selling price of the TV (including VAT and tax): ");
//     scanf("%d", &sellingprice);
//     taxes = (sellingprice * vat) + (sellingprice * tax);
//     printf("%d", taxes);
//     printf(" You made a profit of %d\n", (sellingprice - taxes) - bprice);
// }

// Sample input  : Enter the cost price of the TV: 3500
//                 Enter the selling price of the TV (including VAT and tax): 7000
// Sample output : You made a profit of 1956.52

// ==========================================================================================================

// Que 3 : Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
// --------

// Percentage >= 90% : Grade A

// Percentage >= 80% : Grade B

// Percentage >= 70% : Grade C

// Percentage >= 60% : Grade D

// Percentage >= 40% : Grade E

// Percentage < 40% : Grade F

//

// #include <stdio.h>
// int main()
// {
//     int marks, Physics, Chemistry, Biology, Mathematics, Computer, Percentage;
//     printf("Enter Physics marks : ");
//     scanf("%d", &Physics);
//     printf("Enter Chemistry marks : ");
//     scanf("%d", &Chemistry);
//     printf("Enter Biology marks : ");
//     scanf("%d", &Biology);
//     printf("Enter Mathematics marks : ");
//     scanf("%d", &Mathematics);
//     printf("Enter Computer marks : ");
//     scanf("%d", &Computer);
//     Percentage = (Physics + Chemistry + Biology + Mathematics + Computer) / 5;
//     if (Percentage >= 90)
//     {
//         printf("Grade A\n");
//     }
//     else if (Percentage >= 80)
//     {
//         printf("Grade B\n");
//     }
//     else if (Percentage >= 70)
//     {
//         printf("Grade C\n");
//     }
//     else if (Percentage >= 60)
//     {
//         printf("Grade D\n");
//     }
//     else if (Percentage >= 40)
//     {
//         printf("Grade E\n");
//     }
//     else if (Percentage < 40)
//     {
//         printf("Grade F\n");
//     }
// }

// ====================================================================================================

// Que 4 : Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
// --------

// For first 50 units Rs. 0.50/unit

// For next 100 units Rs. 0.75/unit

// For next 100 units Rs. 1.20/unit

// For unit above 250 Rs. 1.50/unit

// An additional surcharge of 20% is added to the bill

// #include <stdio.h>
// int main()
// {
//     int units;
//     float surcharge = 0.20, Total; // surcharge = 20%
//     printf("Enter units : ");
//     scanf("%d", &units);
//     if (units <= 50)
//     {
//         Total = units * 0.50;
//         Total = Total + (Total * surcharge);
//         printf("Total bill with surcharge : %.2f\n", Total);
//     }
//     else if (units >= 50 && units <= 150)
//     {
//         Total = (50 * 0.50) + ((units - 50) * 0.75);
//         Total = Total + (Total * surcharge);
//         printf("Total bill with surcharge : %.2f\n", Total);
//     }
//     else if (units >= 150 && units <= 250)
//     {
//         Total = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
//         Total = Total + (Total * surcharge);
//         printf("Total bill with surcharge : %.2f\n", Total);
//     }
//     else if (units >= 250)
//     {
//         Total = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
//         Total = Total + (Total * surcharge);
//         printf("Total bill with surcharge : %.2f\n", Total);
//     }
// }




// Write a C program that takes two numbers and an operator as input and performs the appropriate operation.

// input :
// Enter Two number : 10 20
// Enter Operator : +
// output :
//     Addition is : 30

//     input :
//     Enter Two number : 5 2
//     Enter Operator : *
//     output :
//     Addition is : 10

//     input :
//     Enter Two number : 8 1
//     Enter Operator : #
// output:
// Invalid input

// #include<stdio.h>
// int main() {
//     int val1, val2;
//     char ch;
//     scanf("%d%d %c", &val1, &val2, &ch);
//     if (ch == '+') {
//         printf("%d", val1 + val2);
//     }
//     else if (ch == '-') {
//         printf("%d", val1 - val2);

//     }
//     else if (ch == '*') {
//         printf("%d", val1 * val2);
//     }
//     else if (ch == '/') {
//         printf("%d", val1 / val2);
//     }
//     else if (ch == '%') {
//         printf("%d", val1 % val2);
//     }
//     else {
//         printf("Invalid input");
//     }
// }






// Write a C Program to Identify the Time of Day : -
// ------------------------------------------------ -
// Develop a C program that accepts an hour(in 24 - hour format) as input and classifies the time of day as "Morning," "Afternoon," "Evening," or "Night." Implement this using a series of if statements.The program should also validate the input and display an error message if the entered hour is outside the valid range(0 - 23).

// Sample Input : -
// -------------- -
// Enter the hour(24 - hour format) : 13

// Sample Output : -
// ----------------
// It's Afternoon.

// #include<stdio.h>
// int main() {
//     int time;
//     scanf("%d", &time);
//     if (time < 12) {
//         printf("Its Morning");
//     }
//     else if (time <= 15) {
//         printf("Its Afternoon");
//     }
//     else if (time <= 18) {
//         printf("Its Evening ");
//     }
//     else {
//         printf("Good night");
//     }
// }




// Write a C program to determine whether a person is eligible to get married in India or not, based on their age, gender, and nationality.

// -- > The program should read three inputs from the user :

// 1. Age of the person
// 2. Gender of the person(Male / Female)
// 3. Nationality of the person(for Indian 'i' or 'I')

// -- > The program should first check the nationality of the person.If the person is not an Indian citizen, the program should print "You are not an Indian citizen, cannot get married in India"

// -- > If the person is an Indian citizen, the program should then check their age and gender to determine if they are eligible to get married.

// - If the person is a male, they must be at least 21 years old to get married.
// - If the person is a female, they must be at least 18 years old to get married.

// -- > Eligible to get married in India" if the person meets all the criteria (age, gender, and nationality)
// - "Not eligible to get married in India" if the person does not meet the age or gender criteria
// Sample Input
// input :
// Enter your age : 28
// Enter your gender(M / F) : m
// Enter your nationality(i or I  for Indian) : I
// Sample Output
// output :
// Eligible to get married in India

// #include<stdio.h>
// int main() {
//     int age = 0;
//     char gender, natinality;
//     scanf("%d %c %c", &age, &gender, &natinality);
//     if (natinality == 'I' || natinality == 'i') {
//         if (age >= 18 && (gender == 'f' || gender == 'F')) {
//             printf("Eligible to get married in India");
//         }
//         else if (age >= 21 && (gender == 'M' || gender == 'm')) {
//             printf("Eligible to get married in India");
//         }
//         else {
//             printf("Not eligible to get married in India");
//         }

//     }
//     else {
//         printf("You are not an Indian citizen, cannot get married in India");
//     }
// }



// Write a C program to check whether a number is negative, positive or zero.

// case 1:
// input:
//     Enter a number : 5
//         output :
//         Positive
// case 2:
// input:
//     Enter a number : 0
//         output :
//         Zero
// case 3:
// input:
//     Enter a number : -6
//         output :
//         Negative


// #include<stdio.h>
// int main() {
//     int num;
//     scanf("%d", &num);
//     if (num < 0) {
//         printf("Negative");
//     }
//     else if (num > 0) {
//         printf("Positive");
//     }
//     else {
//         printf("Zero");
//     }
// }






// Write a C program to input the lengths of all sides of a triangle and check whether the triangle is valid.

// Validity Check : -
// ------------------
// ->The sum of side1 and side2 must be greater than side3.
// ->The sum of side1 and side3 must be greater than side2.
// ->The sum of side2 and side3 must be greater than side1.

// If all three conditions are true, the program should print "The triangle is valid." If any of the conditions are false, the program should print "The triangle is not valid."

// Sample Input : -
// -------------- -
// Enter the lengths of the three sides of the triangle :
// ->Side 1 : 3
// ->Side 2 : 4
// ->Side 3 : 5

// Sample Output : -
// ---------------- -
// The triangle is valid.

// Sample Input : -
// -------------- -
// Enter the lengths of the three sides of the triangle :
// ->Side 1 : 1
// ->Side 2 : 2
// ->Side 3 : 3



// #include<stdio.h>
// int main() {
//     int a, b, c;
//     scanf("%d%d%d", &a, &b, &c);
//     if (a + b > c && a + c > b && b + c > a) {
//         printf("Triangle is valid");
//     }
//     else {
//         printf("Triangle is Not valid");
//     }
// }