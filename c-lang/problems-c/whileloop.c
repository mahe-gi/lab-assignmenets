// Write a C program to print sum of digits entered by user
// --------

// Sample input : int n = 1234

// Sample output : 10
// Sample Input
// 1234
// Sample Output
// Sum of digits of 1234 is : 10


// #include<stdio.h>
// int main() {
//     int number = 0, sum = 0, rem = 0, temp = 0;
//     scanf("%d", &number);
//     if (number < 0) {
//         printf("Negative value Not Allowed.");
//         return 0;
//     }
//     temp = number;
//     while (temp != 0) {
//         rem = temp % 10;
//         sum = sum + rem;
//         temp = temp / 10;

//     }
//     printf("Sum of digits of %d is: %d", number, sum);
// }




// Write a C program to print all natural numbers form 1 to N in reverse order
// --------

// Sample input : int n = 10;

// Sample output : 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
// Sample Input
// 10
// Sample Output
// Natural numbers from 10 to 1 :
//     10 9 8 7 6 5 4 3 2 1

// #include<stdio.h>
//     int main() {
//     int number = 0;
//     scanf("%d", &number);
//     if (number < 0) {
//         printf("Please enter a natural number (positive integer greater than 0).");
//         return 0;
//     }
//     printf("Natural numbers from %d to 1:\n", number);
//     while (number > 0) {
//         printf("%d ", number--);
//     }
// }




// PrintAlphabets
// Write C program to print alphabets from a to z using while loop
// Enter starting alphabet (a-z): d
// Enter ending alphabet (a-z): j
// Alphabets from d to j:
// d e f g h i j
// Sample Input
// a
// d
// Sample Output
// Alphabets from a to d:
// a b c d 





// #include<stdio.h>
// int main() {
//     char val1, val2;
//     scanf("%c %c", &val1, &val2);
//     if (val1 >= 'a' && val1 <= 'z' || val2 >= 'a' && val2 <= 'z') {
//         printf("Alphabets from %c to %c:\n", val1, val2);
//         for (val1;val1 <= val2;val1++) {
//             printf("%c ", val1);
//         }
//     }
//     else {
//         printf("Invalid input. Please enter lowercase letters from a to z in correct order.");
//     }
// }




// MultiplicationTable
// Write C program to print multiplication table of a given number.
// --------

// Sample input : int n = 5;

// Sample output : 5 * 1 = 5
// 5 * 2 = 10
// 5 * 3 = 15
// - --
// - --
// 5 * 10 = 50
// Sample Input
// 5
// Sample Output
// Multiplication table of 5:
// 5 * 1 = 5
// 5 * 2 = 10
// 5 * 3 = 15
// 5 * 4 = 20
// 5 * 5 = 25
// 5 * 6 = 30
// 5 * 7 = 35
// 5 * 8 = 40
// 5 * 9 = 45
// 5 * 10 = 50





// #include<stdio.h>
// int main() {
//     int number = 0, i = 1;
//     scanf("%d", &number);
//     if (number < 0) {
//         printf("Negative Number not allowed.");
//         return 0;
//     }
//     printf("Multiplication table of %d:\n", number);
//     while (i <= 10) {
//         printf("%d * %d = %d\n", number, i, number * i);
//         i++;
//     }
// }




// EvenAndOddSum
// Write a C program that reads a positive integer N from the user and calculates the sum of even and odd numbers between 1 and N using a while loop.
// The program should then print the sum of even numbers and the sum of odd numbers.

// NOTE : If user entered negative input then print "Invalid Input" message.


// Example_1 :

//     Sample input : N = -10;

// Sample output : Invalid Input
// Sample Input
// 10
// Sample Output
// Even Sum = 30
// Odd Sum = 25




// #include<stdio.h>
// int main() {
//     int number = 0, even = 0, odd = 0;
//     scanf("%d", &number);
//     if (number < 0) {
//         printf("Invalid Input");
//         return 0;
//     }
//     while (number != 0) {
//         if (number % 2 == 0) {
//             even = even + number;
//             number--;
//         }
//         else {
//             odd = odd + number;
//             number--;
//         }

//     }
//     printf("Even sum = %d\n", even);
//     printf("Odd sum = %d\n", odd);
// }




// 1)  Write C program to check given number is spy number or not.
// --------

// spy number :
// A spy number is a number where the sum of its digits equals
// the product of its digits.
// For example :
// 1124 is a spy number, because the sum of its digits is 1+1+2+4=8 and 
// the product of its digits is 1*1*2*4=8 is equal.


// #include<stdio.h>
// int main(){

//     int number=0,sum=0,mul=1;
//     scanf("%d",&number);
//     int temp=number;
//     while (number!=0)
//     {
//         int lastnumber = number%10;
//         sum=sum+lastnumber;
//         mul=mul*lastnumber;
//         number=number/10;
//     }
//     if(sum == mul){
//         printf(" %d is a spy number\n",temp);
//     }else{
//         printf("%d is not a spy number\n",temp);
//     }

// }




// ====================================

// 2) Write a c program to find the given Number is Prime Or Not
// Enter the number : 13
// 13 is a prime number.



// #include<stdio.h>
// int main(){
//     int number=0,count=0;
//     scanf("%d",&number);
//     int i=1;
//     while (i<=number)
//     {
//         if(number%i==0)count++;
//         i++;
//     }
//     if(count == 2){
//         printf("%d is Prime Number\n",number);
//     }else{
//         printf("%d is Not Prime Number\n", number);

//     }

// }





// ====================================

// 3) Write a c program that will print the prime number from 1 to N
// ===================================


// 4)Write C program to check given number is automorphic number or not.

// Automorphic number :
// An automorphic number is a number whose square ends in the
// same digits as the number itself.
// For example:
// 5,6,25 are automorphic numbers.
// 5*5=25 // last digit is 5
// 6*6=36 // last digit is 6
// 25*25=625 // last digit is 25

// #include<stdio.h>
// int main(){

//     int number=0,sqre=0;
//     scanf("%d",&number);

//     sqre=number*number;

//     while (number!=0)
//     {
//         if(number%10 != sqre%10){
//             printf("Not automorphic number\n");
//             return 0;
//         }
//         number/=10;
//         sqre/=10;


//     }
//     printf("automorphic number\n");

// }





