// Write a C program to read name and age of person and by age check the person is eligible for vote or not using simple if

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name[20];
//     int age = 0;
//     scanf("%s", name);
//     scanf(" %d", &age);
//     if (age >= 18)
//     {
//         printf("Hi %s you are eligible to vote.", name);
//         return 0;
//     }
//     printf("Sorry %s you are not eligible to vote.", name);
// }

// Write a 'C' program to take the number of days and convert into(days:months : years)
//     tif given number is less then or equals with zero print invalid input and
//     if its positive number then convert that number into year month and days

// #include <stdio.h>
//     int main()
// {
//     int days = 0;
//     scanf("%d", &days);
//     if (days <= 0)
//     {
//         printf("Invalid input");
//         return 0;
//     }
//     printf("%d Year\n", days / 365);
//     printf("%d month\n", (days % 365) / 30);
//     printf("%d day\n", (days % 365) % 30);
// }

// Write a program to find square and cube of a user given number using Simple if if numbers last digit is less than 5 then print square.if numbers last digit is greater than or equals to 5 then print cube.

// #include <stdio.h>
//     int
//     main()
// {
//     long number = 0;
//     scanf("%d", &number);
//     if (number % 10 < 5)
//     {
//         printf("Square is: %ld", number * number);
//         return 0;
//     }
//     printf("Cube is: %ld", number * number * number);
// }

// Write a program to convert from uppercase Character to Lowercase Character if the user Enter uppercase convert into lower case.if the user Enter lowercase then print same character

// #include <stdio.h>
//     int
//     main(){
//         char charecter = 0;
//         scanf("%c", &charecter);
//         if (charecter >= 97 && charecter <= 122){
//             printf("%c", charecter);
//             return 0;} if (charecter >= 65 && charecter <= 90){
//             printf("%c", charecter + 32);}

// }

// Develop a program on a payroll system for a company. The system needs to calculate the salary of an employee based on their employee type ('M' for manager or 'H' for HR employee) and their basic salary.
// For managers, their salary should be increased by 10% as a performance bonus and for HR  increased by 5% . Write a C program that takes the employee type and basic salary as inputs and calculates the increased salary using simple if

// #include <stdio.h>
// int main(){
//     float salary=0;
//     char employee =0;
//     scanf("%c",&employee);
//     scanf("%f",&salary);
//     if(employee == 'M'){
//         printf("Basic Salary : %.2f\n",salary);
//         printf("Total Salary : %.2f\n",salary + (salary*0.10));
//         return 0;
//     }
//     if(employee == 'H'){
//         printf("Basic Salary : %.2f\n",salary);
//         printf("Total Salary : %.2f\n",salary + (salary*0.05));
//         return 0;
//     }
//     printf("Invalid Employee Type.");

// }

// Write a C program that checks if a number is divisible by both 3 and 5.

// #include <stdio.h>
// int main(){
//     int a=0;
//     scanf("%d",&a);
//     if(a%3 == 0 && a%5==0){
//         printf("Multiple of both 3 and 5");
//         return 0 ;
//     }
//     printf("Not a multiple of both 3 and 5");
// }

// Write a C program that checks if a given number is even or odd.

// #include <stdio.h>
// int main(){
//     int number =0;
//     scanf("%d",&number);
//     if(number%2==0){
//         printf("Even");
//         return 0;
//     }
//     printf("Odd");
// }

// Write a C program that checks if a number is between 1 and 100.

// #include <stdio.h>
// int main(){
//     int number =0;
//     scanf("%d",&number);
//     if(number >=1 && number <=100){
//         printf("Between 1 and 100");
//         return 0;
//     }
//     printf("Not between 1 and 100");
// }

// Write a C program that checks if a given number is positive, negative, or zero.

// #include <stdio.h>
// int main(){
//     int number =0;
//     scanf("%d",&number);
//     if(number==0)
//         printf("Zero");
//     if(number>0)
//         printf("Positive");
//     if(number<0)
//         printf("Negative");
// }

// Write a C program that checks if the entered character is an alphabet letter or not.

// #include <stdio.h>
// int main(){
//     char alphabet =0;
//     scanf("%c",&alphabet);
//     if(alphabet >='a' && alphabet <= 'z'){
//         printf("Alphabet");
//         return 0;
//     }

//     printf("Not an alphabet");

// }

// Write a C program that checks if a given number is divisible by 5.

// #include <stdio.h>
// int main(){
//     int number =0;
//     scanf("%d",&number);
//     if(number%5==0){
//         printf("Divisible by 5");
//         return 0;

//     }
//     printf("Not divisible by 5");

// }