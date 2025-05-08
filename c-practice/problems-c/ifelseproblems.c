// Que 1 : Write a C program to read age of person and check the person is eligible for vote or not, using if-else.
// -------
// #include <stdio.h>
// int main()
// {
//     int age = 0;
//     // a:
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     // if (age < 0)
//     // {
//     //     printf("your entered -v age \a \n");
//     //     goto a;
//     // }
//     if (age >= 18)
//     {
//         printf("You are eligible to vote.\n");
//     }
//     else
//     {
//         printf("You are not eligible to vote.\n");
//     }
// }

// Sample input  : Enter your age: 20
// Sample output : You are eligible to vote.

// Sample input  : Enter your age: 16
// Sample output : You are not eligible to vote.

// ==========================================================================================================

// Que 2 : Write a C program to find maximum between two numbers using if else.
// -------

// #include <stdio.h>
// int main()
// {
//     int a = 0, b = 0;
//     scanf("%d%d", &a, &b);
//     if (a > b)
//     {
//         printf("%d\n", a);
//     }
//     else
//     {
//         printf("%d\n", b);
//     }
// }

// Sample input  : int a = 100, b = 200
// Sample output : 200

// ==========================================================================================================

// Que 3 : Write a C program to find maximum between three numbers.
// -------

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     scanf("%d%d%d", &a, &b, &c);
//     if (a > b && a > c)
//     {
//         printf("%d\n", a);
//     }
//     else if (b > c)
//     {
//         printf("%d\n", b);
//     }
//     else
//     {
//         printf("%d\n", c);
//     }
// }

// Sample input  : int a = 100, b = 200, c = 300
// Sample output : 300

// ==========================================================================================================

// Que 4 : Write a C program to check whether a number is negative, positive or zero.
// -------

// #include <stdio.h>
// int main()
// {
//     int number = 0;
//     scanf("%d", &number);
//     if (number == 0)
//     {
//         printf("zero\n");
//         return 0;
//     }

//     if (number > 0)
//     {
//         printf("positive number\n");
//     }
//     else
//     {
//         printf("negative number\n");
//     }
// }

// Sample input  : int a = 10
// Sample output : possitive number

// Sample input  : int a = 0
// Sample output : zero

// Sample input  : int a = -2
// Sample output : negative number

// ==========================================================================================================

// Que 5 : Write a C program to check whether a year is leap year or not.
// -------

// #include <stdio.h>
// int main()
// {
//     int year = 0;
//     scanf("%d", &year);
//     if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//     {
//         printf("leap year\n");
//     }
//     else
//     {
//         printf("not leap year\n");
//     }
// }

// Sample input  : int year = 2020 || int year = 2000 || int year = 2004
// Sample output : leap year

// Sample input  : int year = 2001 || int year = 2006
// Sample output : not leap year

// ==========================================================================================================

// Que 6 : Write a C program to check whether a character is alphabet or not.
// -------

// #include <stdio.h>
// int main()
// {
//     char ch = 0;
//     scanf("%c", &ch);
//     if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//     {
//         printf("Alphabet\n");
//     }
//     else
//     {
//         printf("Not Alphabet\n");
//     }
// }

// Sample input  : char ch = 'A';
// Sample output : Alphabet

// Sample input  : char ch = '9';
// Sample output : Not Alphabet

// ==========================================================================================================

// Que 7 : Write a C program to input any alphabet and check whether it is vowel or consonant.
// -------

// #include <stdio.h>
// int main()
// {
//     char ch;
//     scanf("%c", &ch);
//     if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
//     {
//         printf("Vowel\n");
//     }
//     else
//     {
//         printf("Consonent\n");
//     }
// }

// Sample input  : char ch = 'A';
// Sample output : Vowel

// Sample input  : char ch = 'b';
// Sample output : Consonant

// ==========================================================================================================

// Que 8 : Write a C program to input any character and check whether it is alphabet, digit or special character.
// -------

// #include <stdio.h>
// int main()
// {
//     char ch = 0;
//     scanf("%c", &ch);
//     if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//     {
//         printf("Alphabet\n");
//         return 0;
//     }
//     if (ch >= '0' && ch <= '9')
//     {
//         printf("Digit\n");
//     }
//     else
//     {
//         printf("Special Character\n");
//     }
// }

// Sample input  : char ch = 'A';
// Sample output : Alphabet

// Sample input  : char ch = '9';
// Sample output : Digit

// Sample input  : char ch = '@';
// Sample output : Special character

// ==========================================================================================================

// Que 9 : Write a C program to check whether a character is uppercase or lowercase alphabet.
// -------

// #include <stdio.h>
// int main()
// {
//     char ch = 0;
//     scanf("%c", &ch);
//     if (ch >= 'a' && ch <= 'z')
//     {
//         printf("Lowercase\n");
//         return 0;
//     }
//     if (ch >= 'A' && ch <= 'Z')
//     {
//         printf("UpperCase\n");
//     }
//     else
//     {
//         printf("not a alphabet\n");
//     }
// }

// Sample input  : char ch = 'A';
// Sample output : UpperCase

// Sample input  : char ch = 'b';
// Sample output : LoweCase

// ==========================================================================================================

// Que 10 : Write a C program to input all sides of a triangle and check whether triangle is valid or not.
// -------
// #include <stdio.h>
// int main()
// {
//     int side1, side2, side3;
//     printf("side1: ");
//     scanf("%d", &side1);
//     printf("side2: ");
//     scanf("%d", &side2);
//     printf("side3: ");
//     scanf("%d", &side3);

//     if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
//     {
//         printf("The triangle is valid.\n");
//     }
//     else
//     {
//         printf("The triangle is not valid.\n");
//     }
// }

//           Validity Check:
//           The sum of side1 and side2 must be greater than side3.
//           The sum of side1 and side3 must be greater than side2.
//           The sum of side2 and side3 must be greater than side1.
//           If all three conditions are true, the program prints "The triangle is valid."
//           If any of the conditions are false, the program prints "The triangle is not valid."

// Sample input  : Enter the lengths of the three sides of the triangle:
//                 Side 1: 3
//                 Side 2: 4
//                 Side 3: 5

// Sample output : The triangle is valid.

// Sample input  : Enter the lengths of the three sides of the triangle:
//                 Side 1: 1
//                 Side 2: 2
//                 Side 3: 3

// Sample output : The triangle is not valid.
