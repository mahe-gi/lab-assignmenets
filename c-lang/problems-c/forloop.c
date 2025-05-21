// * For Loop *

// 1) Write a C program to check the given number is perfect number or not. A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself). 



// Input as :

// Enter a number :28

// Output as :

// 28 is a Perfect Number

// #include<stdio.h>
// int main() {
//     int number = 0, sum = 0;
//     scanf("%d", &number);
//     if (number <= 0) {
//         printf("invalid input\n");
//             return 0;
//     }
//     for (int i = 1;i <= number / 2;i++) {
//         if (number % i == 0)sum += i;
//     }
//     if (sum == number)printf("%d is a Perfect Number\n", number);
//     else printf("Not a perfect Number\n");
// }








// =====================================




// 2)Write a C program to check the given number is a prime number or not.



// Input as :

// Enter a number : 13

// Expected Output :

// 13 is a Prime Number.



// #include<stdio.h>
// int main(){
//     int number=0,count=0;
//     scanf("%d",&number);
//     if(number<=0){
//         printf("invalid number\n");
//         return 0;
//     }
//     for(int i=1;i<=number;i++){
//         if(number%i==0){
//             count++;
//         }
//     }
// if(count == 2){
//     printf("%d is a Prime Number\n",number);
// }else{
//     printf("Not a prime Number\n");
// }
// }





// ===================================

// 3)Write a program in C to display the cube of the number up to an integer.



// Test Data :

// Input number of terms : 5

// Expected Output :

// Number is : 1 and cube of the 1 is :1

// Number is : 2 and cube of the 2 is :8

// Number is : 3 and cube of the 3 is :27

// Number is : 4 and cube of the 4 is :64

// Number is : 5 and cube of the 5 is :125

// #include<stdio.h>
// int main(){
//     int number=0;
//     scanf("%d",&number);
//     for(int i=1;i<=number;i++){
//         printf(" Number is : %d and cube of the %d is :%d\n", i, i,(int)(i * i * i));
//     }
// }



// =====================================

// 4)Write a program in C to display the multiplication table for a given integer. 



// Test Data :

// Input the number (Table to be calculated) : 15

// Expected Output :

// 15 X 1 = 15

// ...

// ...

// 15 X 10 = 150

// #include<stdio.h>
// int main(){
//     int number=0;
//     scanf("%d",&number);
//     for(int i=1;i<=10;i++){
//         printf("%d X %d = %d\n",number,i,i*number);
//     }
// }





// ======================================

// 5)Write a C program to generate the Fibonacci sequence up to a given times using a while loop. The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones, usually starting with 0 and 1. The program should prompt the user to enter a positive integer and then print the Fibonacci sequence up to that number.
// Note:- perform this logic using Both for and while loop



// Input as:

// Enter how many Fibonacci series you want : 9 



// Output as:

// 0 1 1 2 3 5 8 13 21



// #include<stdio.h>
// int main(){
//     int number=0,a=0,b=1,c=1;
//     int i=1;
//     scanf("%d",&number);
//     // while (i<=number)
//     // {
//     //     printf("%-2d",a);
//     //     a=b;
//     //     b=c;
//     //     c=a+b;
//     //     i++;
//     // }
//     // printf("\n");

//     for(;i<number;i++){
//         printf("%-2d",a);
//         a=b;
//         b=c;
//         c=a+b;
//     }
//     printf("\n");
// }

// =====================================