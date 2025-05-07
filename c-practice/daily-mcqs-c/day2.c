#include <stdio.h>

void printStudentDetails();
void printPattern();
void printallarithamaticValues(int a, int b);
void sumofFirstandLastdigitno(int a);
void printareaofsquareandrectangle();
void nextorpreviousMultiple10(int a);
void evenorodd();
void maximunnumber();
int main()
{
    maximunnumber();
    return 0;
}

// Que 1 :  Write a 'C' program to print student details using printf() function only.
// -------

// Sample Output : Name = Raj Malhotra
//                 Roll No = 101
//                 Branch = CSE
//                 Address = Hyderabad
//                 Collage Name = Naresh It

void printStudentDetails()
{
    printf("Name = Raj Malhotra\n");
    printf("Roll No = 101\n");
    printf("Branch = CSE\n");
    printf("Address = Hyderabad\n");
    printf("Collage Name = Naresh It\n");
}

// ========================================================================================================

// Que 2 :  Write a 'C' program to print following pattern/diagram using printf() function only.
// -------

// Sample Output :
//                 # # # # #
//                 #       #
//                 #       #
//                 #       #
//                 # # # # #

void printPattern()
{

    printf(" # # # # #\n");
    printf(" #       #\n");
    printf(" #       #\n");
    printf(" #       #\n");
    printf(" # # # # #\n");
}

// ========================================================================================================

// Que 3 :  Write a 'C' program to declare and initialize two variable like int a=10,b=20 and print the Addition, substraction, multiplication,division,Modulation operation.
// -------

// Sample input : a=20, b=10;

// Sample Output :
//                Addition is : 30
//                substraction is : 10
//                Multiplication is : 200
//                Division is : 2
//                Modulation is : 0

void printallarithamaticValues(int a, int b)
{

    printf("Addition is : %d\n", a + b);
    printf("subtraction is : %d\n", a - b);
    printf("Multiplication is : %d\n", a * b);
    printf("Division is : %d\n", a / b);
    printf("Modulation is : %d\n", a % b);
}

// ========================================================================================================

//  Que 4 :  Write a 'C' program to print sum of first and last digit of given any 3 digit number
// -------

// Sample input : int number = 123;

// Sample Output : 4

// Explanation : given number is = 123 . so the result is (1+3)=4

void sumofFirstandLastdigitno(int a)
{

    int number = a;
    int firstnumber = 0;
    int lastnumber = number % 10; // gives last number
    number = number / 10;         // removes lastnumber
    number = number / 10;         // removes lastnumber
    firstnumber = number;         // only last number is have
    printf(" %d \n", firstnumber + lastnumber);
}

// ========================================================================================================

//  Que 5 :
// 		Write a C program to calculate and print the area of a square and rectangle.
// -------

// Sample input :
// Side of square is : 5
// Length and breadth of rectanngle is : 4 , 5

// Sample output :
// The area of the square with side 5 is: 25
// The area of the rectangle with length 4 and breadth 5 is: 20

void printareaofsquareandrectangle()
{

    int sideofsquare = 5;
    int length = 4;
    int breadth = 5;

    // printf("Side of square is : \n");
    // scanf("%d", &sideofsquare);
    // printf(" Length and breadth of rectangle is : ");
    // scanf("%d%d", &length, &breadth);

    printf("The area of the square with side %d is : %d \n", sideofsquare, sideofsquare * sideofsquare);
    printf("The area of the rectangle with length %d and breadth %d is : %d \n", length, breadth, length * breadth);
}

// ========================================================================================================
// Que 6 :  Without using control statments Write a C program to determine the next or previous multiple of 10 for a given two-digit number.
// --------  The program should follow these rules:
//           If the last digit of the given number is greater than or equal to 5, the program should print the next multiple of 10.
//           If the last digit of the given number is less than 5, the program should print the previous multiple of 10..

// Sample input : int a = 34 , b = 25 , c = 86;

// Sample Output : 30 , 30 , 90

void nextorpreviousMultiple10(int a)
{

    int number = a;
    int lastnumber = 0;
    lastnumber = number % 10; // gives lastnumber

    lastnumber < 5 && printf("%d\n", (number / 10) * 10) || printf("%d \n", ((number / 10) + 1) * 10);

    // Todo: other method
}

// ========================================================================================================

// Que 7 :  Write a 'C' program to check and print that given number is even or odd without using ternary operator and control statments.
// --------

// Sample input : int a = 10
// Sample Output : EVEN

// Sample input : int a = 125
// Sample Output : ODD

void evenorodd()
{

    int number = 125;

    number % 10 == 0 && printf("EVEN\n") || printf("ODD\n");
}

// ========================================================================================================

// Que 8 :  Write a 'C' program to check and print the Maximum number among two numbers without using ternary operator and control statments.
// --------

// Sample input : int a = 10 , b = 20
// Sample Output : MAX = 20

void maximunnumber()
{

    int a = 10, b = 20;
    a > b &&printf("MAX = %d\n", a) || printf("MAX = %d \n", b);
}
