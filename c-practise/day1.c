
#include<stdio.h>

int addDigitsOfNumber(int num);
int additionofnumber(int a ,int b);
int reveres_twoditnumber(int num);
int previous_multiple(int num);
int next_multipleten(int num);
int swap_numbers(int vala , int valb);
int swap_without_using_third_var(int num1 , int num2);

int main(){

swap_without_using_third_var(20,10);



}






// 1)  Write a C program to add each digit of a given two digit number. The given number is 67.

//   int a=67

// Example:- 67 = 6 + 7 = 13

// Expected output is : 13




int addDigitsOfNumber(int num)
{
        int temp =num;
    int lastdigit = temp%10; // gives last digit 

    temp = temp/10;//removes last digits

    printf("answer = %d \n" , temp+lastdigit);


    return 0;
}




// ===================================

// 2) Write a C Program to perforn addition of two number without using '+' operator

// Example:-

//       a=5
//       b=3

// output= 8



int additionofnumber(int a ,int b)
{
    printf("output =  %d  \n" ,a - (-b));

    return 0 ;

}





// ===================================

// 3) Write a C program to reverse a two digit number without using any loop. The given number is 13 and the output is 31.

// Example :- 13
// output:- 31


int reveres_twoditnumber(int num)
{
    int number =num;
    int ans = number%10;
    number = number/10;
    ans = (ans*10)+number;
    printf("output = %d \n",ans);
    return 0;


}



// ===================================

// 4) Write a C program to find the previous multiple of 10 of a given two digit number . The given number is 23 and the output is . 20

// Example :- 23

// Expected output:- 20



int previous_multiple(int num){

int ans = num/10;

ans = ans*10;
printf(" output = %d \n",ans);
return 0 ;



}








// ===================================

// 5) Write a C program to find the next multiple of 10 of a given two digit number . The given number is 26 and the output is . 30

// Example :- 26

// Expected output:- 30



int next_multipleten(int num)
{

int temp = (num/10)+1;

temp = temp *10;

printf("output = %d \n",temp);
return 0;


}






// ===================================

// 6) Write a C Program to swap the numbers by using third variable
 
// Example:-  a=10, b=20;

// expected output:- a=20, b=10


int swap_numbers(int vala , int valb)
{

    printf("first values a= %d  b = %d \n \n",vala,valb);
    int a =vala;
    int b=valb;
    int c = a;
    a=b;
    b=c;

    printf("after swap a = %d  b = %d \n",a,b);



return 0;
}






// ===================================

// 7) Write a C Program to swap the numbers without using third variable
 
// Example:-  a=10, b=20;

// expected output:- a=20, b=10


    int swap_without_using_third_var(int num1 , int num2)
    {

        int a =num1; 
        int b=num2;

        printf("before swapping : a= %d b=%d \n",a,b);

        a =a+b;
        b=a-b;
        a=a-b;
        printf("after swaping  : a=  %d  b=%d \n",a,b );


        return 0;

    }


