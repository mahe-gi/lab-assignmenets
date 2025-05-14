
#include <stdio.h>
void evenORodd(int a);
void minmaxval(int a, int b);
void minmaxusingthreenums(int num1, int num2, int num3);
void posornegint(int a);
void payroll();
int main()

{
    // evenORodd(125);
    // minmaxval(10, 20);
    // minmaxusingthreenums(40, 10, 120);
    // posornegint(-1);
    payroll();
}

// 1) Write a 'C' program to check and print that given number is even or odd  using ternary operator and control statments.
// --------

// Sample input : int a = 10
// Sample Output : EVEN

// Sample input : int a = 125
// Sample Output : ODD

void evenORodd(int a)
{

    int number = a;

    (number % 2 == 0) printf("EVEN\n") : printf("ODD\n");
}

// ======================================

// 2) Write a 'C' program to check and print the Maximum number among two numbers  using ternary operator and control statments.
// --------

// Sample input : int a = 10 , b = 20
// Sample Output : MAX = 20

void minmaxval(int a, int b)
{
    int number1 = a;
    int number2 = b;

    number1 > number2 printf("MAX = %d\n", number1) : printf("MAX = %d\n", number2);
}

// ======================================

// 3) Write a 'C' program to check and print the Maximum number among three numbers using ternary operator and control statments.
// --------

// Sample input : int a = 10 , b = 200, c = 134;
// Sample Output : MAX = 200

void minmaxusingthreenums(int num1, int num2, int num3)
{
    int a = num1, b = num2, c = num3;

    (a > b && a > c) printf("MAX = %d\n", a) : b > c printf("MAX = %d\n", b)
        : printf("MAX = %d\n", c);
}

// ========================================
// 4)Write a C program that takes an integer as input and checks if it is a positive, negative, or zero.
// Display the appropriate message as output using the ternary operator.

void posornegint(int a)
{
    int num1 = a;

    num1 > 0 printf("POSITIVE\n") : num1 < 0 printf("NEGATIVE\n")
        : printf("ZERO\n");
}

// ========================================
// 5) Devlop a program on a payroll system for a company. The system needs to calculate the salary of an employee based on their employee type ('M' for manager or 'H' for HR employee) and their basic salary.
// ------   For managers, their salary should be increased by 5% as a performance bonus. Write a C program that takes the employee type and basic salary as inputs and calculates the increased salary using the ternary operator.

void payroll()
{

    int salary = 0;
    int per = 0;
    char employee;
    printf("enter employee type (H/ M): ");
    scanf("%c", &employee);
    printf("Enter Salary : ");
    scanf("%d", &salary);
    printf("Enter performance bonus %% : ");
    scanf("%d", &per);

    int bonus = salary * (float)per / 100;

    employee == 'M' printf("%d %% as a performance bonus : %d\n", per, salary + bonus)
        : (employee == 'H') printf("%d %% as a performance bonus : %d\n", per, salary + bonus)
        : printf("enter emoply type corretly\n");
}
