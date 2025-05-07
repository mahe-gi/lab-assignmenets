

// Devlop a program on a payroll system for a company. The system needs to calculate the salary of an employee based on their employee type ('M' for manager or 'H' for HR employee) and their basic salary.
// ------   For managers, their salary should be increased by 5% as a performance bonus. Write a C program that takes the employee type and basic salary as inputs and calculates the increased salary using the ternary operator
// Sample Input
// M
// 25000
// Sample Output
// Final salary: 26250.00

#include <stdio.h>
int main()
{
    int salary;
    char employeetype;
    scanf("%c %d", &employeetype, &salary);
    float bonus = salary * ((float)5 / 100);

    salary < 0 ? printf("Negative Salary Not Allowed.") : employeetype == 'M' ? printf("Final salary: %.2f", (float)salary + bonus): employeetype == 'H'   ? printf("Final salary: %.2f", (float)salary): printf(" ");
}
// #include <stdio.h>
// int main()
// {
//     int a = -1, b = 1, c, d;
//     c = !a && b;
//     d = !a || b;
//     printf("%d %d %d %d", a, b, c, d);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int x = 5, y = 2, z;
//     z = x / y * x % y;
//     printf("%d\n", z);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a, b = 2, c;
//     a = 2 * (b++);
//     c = 2 * (++b);
//     printf("a=%d, b=%d, c=%d", a, b, c);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {

//     int x = 3, y = 2;
//     int z = x++ * (x + y) - y--;  // initilization time no priority
//     printf("%d%d%d", x, y, z);
// }

// #include <stdio.h>
// int main()
// {
//     int a = 1;
//     int b = 1;
//     int c = a || --b;
//     int d = a-- && --b;
//     printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i = 0, j = 1, k = 2, m;
//     m = i++ || j++ || k++;
//     printf("%d %d %d %d", m, i, j, k);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 4, b = 2;
//     printf("%d", a | b);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char val = 0;
//     float firstnumber = 0;
//     float lastnumber = 0;
//     scanf("%c\n", &val);
//     scanf("%f\n", &firstnumber);
//     scanf("%f\n", &lastnumber);
//     val == '+' && printf("Addition is: %.2f", firstnumber + lastnumber);
//     val == '-' && printf("Subtraction is: %.2f", firstnumber - lastnumber);
//     val == '*' && printf("Multiplication is: %.2f", firstnumber * lastnumber);
//     val == '/' && printf("Division is %.2f", firstnumber / lastnumber);
// }

// #include <stdio.h>
// int main()
// {

//     int number = 0;
//     scanf("%d", &number); // 234

//     number % 100 >= 50 && printf("Previous multiple: %d\n", (number / 100) * 100) && printf("Next multiple: %d", ((number / 100) + 1) * 100);
// }
