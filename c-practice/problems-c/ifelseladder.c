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
//     int units, Total;
//     float surcharge = 0.20; // surcharge = 20%
//     printf("Enter units : ");
//     scanf("%d", &units);
//     if (units <= 50)
//     {
//         Total = units * 0.50;
//         Total = Total + (Total * surcharge);
//         printf("Total bill with surcharge : %d\n", Total);
//     }
//     else if (units >= 50 && units <= 150)
//     {
//         Total = (50 * 0.50) + ((units - 50) * 0.75);
//         Total = Total + (Total * surcharge);
//         printf("Total bill with surcharge : %d\n", Total);
//     }
//     else if (units >= 150 && units <= 250)
//     {
//         Total = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
//         Total = Total + (Total * surcharge);
//         printf("Total bill with surcharge : %d\n", Total);
//     }
//     else if (units >= 250)
//     {
//         Total = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
//         Total = Total + (Total * surcharge);
//         printf("Total bill with surcharge : %d\n", Total);
//     }
// }