// Que-1)
// _____________
// What will be the output of this below program:-

// #include <stdio.h>

// int main()
// {

//     int a = 12, b = 25;
//     printf("Output = %d ", a & b);

//     return 0;
// }

// o/p = 8 ✅
// ________________________________________________________

// Que-2)
// ______________
// What will be the output of this below program:-

// #include <stdio.h>

// int main()
// {

//     int a = 12, b = 25;
//     printf("Output = %d", a | b);

//     return 0;
// }

// o/p = 29 ✅

// ________________________________________________________
// Que-3)
// ______________
// What will be the output of this below program:-

// #include <stdio.h>

// int main()
// {

//     int a = 12, b = 25;
//     printf("Output = %d", a ^ b);

//     return 0;
// }

// o/p = 21 ✅
// _______________________________________________________
// Que-4)
// _____________
// What will be the output of this below program:-
// #include <stdio.h>

// int main()
// {

//     printf("Output = %d\n", ~35);
//     printf("Output = %d\n", ~-12);

//     return 0;
// }

// o/p= -36 11 ✅

// _______________________________________________________
// Que-5)
// ______________
// What will be the output of this below program:-
// #include <stdio.h>
// int main()
// {
//     int a = 10, b = 100;
//     float c = 10.5, d = 100.5;

//     printf("++a = %d \n", ++a);
//     printf("--b = %d \n", --b);
//     printf("++c = %f \n", ++c);
//     printf("--d = %f \n", --d);

//     return 0;
// }

// o / p = > 11 99 11.500000 99.500000✅

// ______________________________________________________
// Que-6)
// _____________
// What will be the output of this below program:-

// #include <stdio.h>
// int main()
// {
//     int a = 5, c;

//     c = a; // c is 5
//     printf("c = %d\n", c);
//     c += a; // c is 10
//     printf("c = %d\n", c);
//     c -= a; // c is 5
//     printf("c = %d\n", c);
//     c *= a; // c is 25
//     printf("c = %d\n", c);
//     c /= a; // c is 5
//     printf("c = %d\n", c);
//     c %= a; // c = 0
//     printf("c = %d\n", c);

//     return 0;
// }

// ____________________________________________________
// Que-7)
// _________________
// What will be the output of this below program:-

// #include <stdio.h>
// int main()
// {
//     int a = 5, b = 5, c = 10;

//     printf("%d == %d is %d \n", a, b, a == b);
//     printf("%d == %d is %d \n", a, c, a == c);
//     printf("%d > %d is %d \n", a, b, a > b);
//     printf("%d > %d is %d \n", a, c, a > c);
//     printf("%d < %d is %d \n", a, b, a < b);
//     printf("%d < %d is %d \n", a, c, a < c);
//     printf("%d != %d is %d \n", a, b, a != b);
//     printf("%d != %d is %d \n", a, c, a != c);
//     printf("%d >= %d is %d \n", a, b, a >= b);
//     printf("%d >= %d is %d \n", a, c, a >= c);
//     printf("%d <= %d is %d \n", a, b, a <= b);
//     printf("%d <= %d is %d \n", a, c, a <= c);

//     return 0;
// }
// o/p = 1 0 0 0 0 1 0 1 1 0 1 1 ✅

// _________________________________________________
// Que-8)
// _____________
// What will be the output of this below program:-

// #include <stdio.h>
// int main()
// {
//     int a = 5, b = 5, c = 10, result;

//     result = (a == b) && (c > b);
//     printf("(a == b) && (c > b) is %d \n", result);

//     result = (a == b) && (c < b);
//     printf("(a == b) && (c < b) is %d \n", result);

//     result = (a == b) || (c < b);
//     printf("(a == b) || (c < b) is %d \n", result);

//     result = (a != b) || (c < b);
//     printf("(a != b) || (c < b) is %d \n", result);

//     result = !(a != b);
//     printf("!(a != b) is %d \n", result);

//     result = !(a == b);
//     printf("!(a == b) is %d \n", result);

//     return 0;
// }

// o/p = 1 0 1 0 1 0 ✅

// ______________________________________________________________

// Que-9)
// __________________
// What will be the output of this below program:-

// #include <stdio.h>
// int main()
// {
//     int a;
//     float b;
//     double c;
//     char d;
//     printf("Size of int=%lu bytes\n", sizeof(a));
//     printf("Size of float=%lu bytes\n", sizeof(b));
//     printf("Size of double=%lu bytes\n", sizeof(c));
//     printf("Size of char=%lu byte\n", sizeof(d));

//     return 0;
// }

// o/p = 2 4 8 1 /  4 4 8 1 for 32 bit ✅

// ____________________________________________________
// Que-10)
// ________________
// What will be the output of this below program:-

// #include <stdio.h>
// int main()
// {
//     int x = 5, y = 15;
//     float m = 5.5, n = 15.5;

//     printf("++x = %d \n", ++x);
//     printf("--y = %d \n", --y);
//     printf("++m = %f \n", ++m);
//     printf("--n = %f \n", --n);

//     return 0;
// }

// o/p = 6 14 6.500000 14.500000✅
// ____________________________________________________
// Que-11)
// _______________
// What will be the output of this below program:-

// #include <stdio.h>
// int main()
// {
//     int p = 8, q = 20;
//     float r = 8.8, s = 20.5;

//     printf("++p = %d \n", ++p);
//     printf("--q = %d \n", --q);
//     printf("++r = %f \n", ++r);
//     printf("--s = %f \n", --s);

//     return 0;
// }

// o/p = 9 19 9.800000 19.500000

// ____________________________________________________
// Que-12)
// ______________
// What will be the output of this below program:-

// #include <stdio.h>
// int main()
// {
//     int i = 7, j = 30;
//     float k = 7.2, l = 30.7;

//     printf("++i = %d \n", ++i);
//     printf("--j = %d \n", --j);
//     printf("++k = %f \n", ++k);
//     printf("--l = %f \n", --l);

//     return 0;
// }

// o / p = 8 29 8.200000 29.700001

// _______________________________________________________
// Que-13)
// _____________
// What will be the output of this below program:-

// #include <stdio.h>
// int main()
// {
//     int m = 25, n = 30, o = 35;

//     printf("%d == %d is %d \n", m, n, m == n);
//     printf("%d == %d is %d \n", m, o, m == o);
//     printf("%d > %d is %d \n", m, n, m > n);
//     printf("%d > %d is %d \n", m, o, m > o);
//     printf("%d < %d is %d \n", m, n, m < n);
//     printf("%d < %d is %d \n", m, o, m < o);
//     printf("%d != %d is %d \n", m, n, m != n);
//     printf("%d != %d is %d \n", m, o, m != o);
//     printf("%d >= %d is %d \n", m, n, m >= n);
//     printf("%d >= %d is %d \n", m, o, m >= o);
//     printf("%d <= %d is %d \n", m, n, m <= n);
//     printf("%d <= %d is %d \n", m, o, m <= o);

//     return 0;
// }

// o/p = 0 0 0 0 1 1 1 1 0 0 1 1 ✅

// ______________________________________________________
// Que-14)
// ______________
// What will be the output of this below program:-

// #include <stdio.h>
// int main()
// {
//     int a = 3, b = 9;
//     printf("%d ", ++(a * b + 1));
//     return 0;
// }

// o/p = error ✅

// _________________________________________________________

// Que-15)
// ______________
//  Find the output of the given C program.

// #include <stdio.h>
// int main()
// {
//     int x, y, z;
//     x = 9 > 8 > 7;
//     y = 9 > 8 > 0;
//     z = 9 > 8 > 1;
//     printf("%d %d %d", x, y, z);
//     return 0;
// }

// o/p = 0 1 0 ✅

// ___________________________________________________________

// Que-16)
// _____________
// Find the output of the given C program.

// #include <stdio.h>
// int main()
// {
//     int a = -1, b = 1, c, d;
//     c = !a && b;
//     d = !a || b;
//     printf("%d %d %d %d", a, b, c, d);
//     return 0;
// }
// o/p = -1 1 0 1 ✅

// ____________________________________________________________
// Que-17)
// ________________
// Find the output of the given C program.

// #include <stdio.h>
// int main()
// {
//     printf("%d ", 5 > 2 && 1 < 2);
//     printf("%d ", 4 > 5 || 2 < 1);
//     printf("%d ", !(2 > 3));
//     return 0;
// }
// o/p = 1 0 1 ✅
// ____________________________________________________________
// Que-18)
// _________________
// Find the output of the given C program.

#include <stdio.h>
int main()
{
    int a;
    a = 'a' > 'A';
    printf("%d", a);
    return 0;
}
// ____________________________________________________________
// Que-19)
// ________________
// Find the output of the given C program.

// #include <stdio.h>
// int main()
// {
//     printf("%d ", -9 && 9);
//     printf("%d", -9 || 9);
//     return 0;
// }

// _____________________________________________________________
// Que-20)
// ________________
// #include <stdio.h>

// int g;

// int main()
// {

//     int a, b;

//     a = 10;
//     b = 20;
//     g = a + b;

//     printf("value of a = %d, b = %d and g = %d\n", a, b, g);

//     return 0;
// }
// ==============================Coding Pgromgramming==================================

// Prog 1:-

// Write C Program to find Smallest number among three without using if else and without using ternary
// _________________

// Prog 2:-

// Write a C program that calculates and displays the simple interest for a given principal amount, rate of interest, and time in years. The program should prompt the user to input the principal amount, rate of interest, and time. After calculating the simple interest using the formula (principal * rate * time) / 100.0, the program should display the result with two decimal places.

// Expected Output:

// Enter principal amount: 5000
// Enter rate of interest: 7.5
// Enter time (in years): 3
// Simple Interest = 1125.00

// _______________________________

// prog 3:-

// Write a C program that calculates and displays the result of raising a given base to a specified exponent. The program should prompt the user to input the base and exponent. After calculating the result using the pow() function from the math.h library, the program should display the result with two decimal places.

// Expected Output:

// Enter base: 2.5
// Enter exponent: 3.0
// 2.50^3.00 = 15.63
