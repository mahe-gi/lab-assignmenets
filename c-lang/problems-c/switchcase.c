// 1)
// Write a C program that reads a float value and a character from the console. The character can be 'd' for deposit or 'w' for withdrawal.

// Start with a minimum balance of 2000..

// -> Prompt the user to initialize the minimum balance. Do not allow 0 or negative values. If the balance is 0 or negative, print: "Amount can't be stored".
// -> If the user chooses the deposit operation, ask how much amount they want to deposit.Add that amount to the balance and print the updated balance.
// -> If the user chooses the withdrawal operation, ask how much amount they want to withdraw. Subtract that amount from the balance and print the updated balance.

// [Note]
// ------
// -> If the deposit amount is negative or 0, print: "Invalid amount".
// -> If the withdrawal amount is negative, 0, or greater than the current balance, print: "Invalid amount".

// Hints :-
// --------
// -> Declare variables for amount (float), balance (float), and transaction code (char).
// -> Check the transaction code. If it is ‘d’ (deposit), ensure the amount is not negative.
// 	If the amount is valid, update the balance:
// 	balance = balance + amount;
// -> Check the transaction code for withdrawal, ‘w’. If the code is ‘w’, subtract the withdrawn amount to update the balance:
// 	balance = balance - amount;

// Print the updated balance.

// Sample-run :-
// -------------

// Test-Case-1: [Valid Deposit Operation]
// --------------------------------------
// Input :-
// ---------
// Enter initial balance: 3000
// Enter transaction code (d for deposit, w for withdrawal): d
// Enter amount: 500

// Expected Output :-
// -------------------
// Balance after deposit: 3500

// Description: The user starts with an initial balance of 3000 and deposits 500. The new balance is updated and displayed correctly.

// Test-Case-2: [Invalid Initial Balance]
// ---------------------------------------
// Input :-
// ---------

// Enter initial balance: -100

// Expected Output :-
// -------------------
// Amount can't be stored

// Description: The user tries to initialize the balance with a negative value. The program handles this by displaying an appropriate error message.

// Test-Case-3: [Invalid Deposit Amount]
// --------------------------------------
// Input :-
// ---------

// Enter initial balance: 2000
// Enter transaction code (d for deposit, w for withdrawal): d
// Enter amount: -200

// Expected Output :-
// -------------------

// Description: The user selects the deposit operation but tries to deposit a negative amount. The program detects this invalid input and displays an error message.

// Test-Case-4: [Invalid Withdrawal Amount]
// -----------------------------------------
// Input :-
// --------
// Enter initial balance: 2500
// Enter transaction code (d for deposit, w for withdrawal): w
// Enter amount: 3000

// Expected Output :-
// ---------------------
// Invalid amount

// #include <stdio.h>
// int main()
// {
//     float bal = 2000, w, d;

//     char ch;
//     printf("Enter initial balance: ");
//     scanf("%f", &bal);
//     bal = bal + 2000;
//     printf("Enter transaction code (d for deposit, w for withdrawal) : ");
//     scanf(" %c", &ch);
//     if (bal <= 0)
//     {
//         printf("Amount can't be stored");
//         return 0;
//     }
//     switch (ch)
//     {
//     case 'w':
//     {
//         printf("Enter amount: ");
//         scanf("%f", &w);
//         if (bal > w && w > 0)
//         {
//             bal = bal - w;
//             printf("Balance after Withdrawal: %.2f\n", bal);
//         }
//         else
//         {
//             printf("Invalid amount");
//         }
//     }

//     break;
//     case 'd': {
//         printf("How much money to deposite :");
//         scanf("%f", &d);
//         if (d > 0) {
//             bal = bal + d;
//             printf("updated balance : %.2f\n", bal);

//         }
//         else {
//             printf("Invalid amount");
//         }

//     }

//             break;
//     default:
//         break;
//     }
// }

// ===================================================
// 2)Scenario Question :-
// ---------------------
// A restaurant wants to build a simple program that helps customers order their meals based on a menu selection. The menu has the following options:

// 1. Pizza - $10
// 2. Burger - $7
// 3. Pasta - $8
// 4. Salad - $5
// 5. Exit

// The user needs to select an item by entering the corresponding number (1-5). If the user selects an invalid option, they should be notified. The program should display the selected item and its price. If the user selects "Exit," the program should terminate.

// Task :-
// --------
// Write a C program using the switch case statement to implement the above scenario. Your program should:

// ->Display the menu options to the user.
//     ->Accept the user's choice.
//     ->Use a switch case to determine the selected item and print the item name and price.
//     ->Handle invalid choices and print an appropriate message.

//     Expected Output Example:
// -
//     -- -- -- -- -- -- -- -- -- -- -- -- -- -
//       Menu:- -- -- -- -1. Pizza 2. Burger 3. Pasta 4. Salad 5. Exit

//                           Enter your
//     choice:2

//            You selected Burger.
//      Price:$7

//       Menu:-

//            1. Pizza 2. Burger 3. Pasta 4. Salad 5. Exit

//                Enter your
//     choice:5

//            Exiting the program.Thank you !



#include<stdio.h>
int main() {
    int num;
    printf("Menu:\n1. Pizza \n2. Burger \n3. Pasta \n4. Salad \n5. Exit\n");
    printf("enter number: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1: {
        printf("You selected Pizza.\n");
    }
          break;
    case 2: {
        printf("You selected Burger.\n");
    }
          break;
    case 3: {
        printf("You selected Pasta.\n");
    }
          break;
    case 4: {
        printf("You selected Salad.\n");
    }
          break;
    case 5: {
        printf("Exiting the program.Thank you !\n");
    }
          break;

    default:
        printf("invalid input\n");
    }
}



// ------------------------------------------------------------------------------------------------------------------------------





// Student Grade Based on Total Marks
// ------------------------------------------------------ -
// Write a program that takes the marks of five subjects as input(each subject mark should be between 0 and 100).The program should :

// Check if all marks are within the range of 0–100.If any marks are invalid, display an error message and exit.
// If any subject mark is below 35, directly display "Fail" without calculating the total or grade.
// Otherwise, calculate the total marks, percentage, and determine the grade using the following criteria :

// -> 90 % –100 % : Grade A
// -> 75 % –89 % : Grade B
// -> 50 % –74 % : Grade C
// -> 35 % –49 % : Grade D
// ->Below 35 % : Fail

// Test Cases - 1 : -
// -------------- -
// Input :
//     ------
//     Subject 1 : 95
//     Subject 2 : 89
//     Subject 3 : 88
//     Subject 4 : 92
//     Subject 5 : 91

//     Output :
//     ------ -
//     Total Marks : 455
//     Percentage : 91.0 %
//     Grade : A(Valid)



// #include<stdio.h>
// int main() {
//     int totalmarks, sub1, sub2, sub3, sub4, sub5;
//     float percentage;
//     scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
//     if (sub1 >= 35 && sub2 >= 35 && sub3 >= 35 && sub4 >= 35 && sub5 >= 35) {
//         totalmarks = sub1 + sub2 + sub3 + sub4 + sub5;
//         percentage = (float)totalmarks / 5;
//         switch ((int)percentage) {
//         case 90 ...100:printf("Total Marks: %d\nPercentage: %.2f\%\nGrade: A", totalmarks, percentage);break;
//         case 75 ...89:printf("Total Marks: %d\nPercentage: %.2f\%\nGrade: B", totalmarks, percentage); break;
//         case 50 ...74:printf("Total Marks: %d\nPercentage: %.2f\%\nGrade: C", totalmarks, percentage);break;
//         case 35 ...49:printf("Total Marks: %d\nPercentage: %.2f\%\nGrade: D", totalmarks, percentage);break;
//         default:printf("Fail");
//         }

//     }
//     else {
//         printf("Fail");
//     }
// }





// Write a program that takes a number(1 - 7) as input and prints the day of the week using a switch statement.If the number is outside this range, display an error message.

// Test Case - 1 :-
// --------------
// Input : -1
// --------

// Output : -"Monday" (Valid)
// ----------

// Test Case - 2 : -
// --------------
// Input : -7
// --------

// Output : -"Sunday" (Valid)
// -------- -

// Test Case - 3 : -
// --------------
// Input : -0 / -1
// --------

// Output : -"Invalid day number. Enter a number between 1 and 7." (Invalid)



// #include<stdio.h>
// int main() {
//     int day;
//     scanf("%d", &day);
//     switch (day) {
//     case 1:printf("Monday");break;
//     case 2:printf("Tuesday");break;
//     case 3:printf("Wednesday");break;
//     case 4:printf("Thursday");break;
//     case 5:printf("Friday");break;
//     case 6:printf("Saturday");break;
//     case 7:printf("Sunday");break;
//     default:printf("Invalid input! Please enter a number between 1 and 7.");
//     }
// }





// Write a C program to do a arithmetic operation on two numbers by using Switch Case.
// Take the operators(+, -, *, / , %) as cases and take the input from the user that what kind of operation user want to do on two number.


// Sample input :

// Enter num1 : 10
// Enter num2 : 20
// Enter operation : *


// Sample output :

// Multiplication is : 200
// Sample Input
// 10
// 20
// +
// Sample Output
// Addition is : 30



// #include<stdio.h>
// int main() {
//     char arithamticsym;
//     int num1, num2;
//     scanf("%d%d", &num1, &num2);
//     scanf(" %c", &arithamticsym);

//     switch (arithamticsym) {
//     case '+': {
//         printf("Addition is: %d", num1 + num2);break;
//     }
//     case '-': {
//         printf("Subtraction is: %d", num1 - num2);break;
//     }
//     case '*': {
//         printf("Multiplication is: %d", num1 * num2);break;
//     }
//     case '/': {
//         printf("Division is: %d", num1 / num2);break;
//     }
//     case '%': {
//         printf("Modules is : %d", num1 % num2);break;
//     }
//     default:printf("entered invalid inputs");
//     }
// }





// Write a C program that asks for a person's name and their game score. Then, it asks for the second person's name and score.The program will print the winner's name and display by how many points the winner won, by comparing the scores. Develop this program using a switch case.

// Sample - run :-
// ------------ -
// Test Case 1 : Valid Input(Player 1 Wins)
// ----------------------------------------
// Input : -
// --------
// Enter name of Player 1 : Alice
// Enter score of Player 1 : 85
// Enter name of Player 2 : Bob
// Enter score of Player 2 : 75

// Expected Output : -
// ------------------
// Winner : Alice
// Points difference : 10

// Test Case 2 : Valid Input(Player 2 Wins)
// ---------------------------------------- -
// Input : -
// --------
// Enter name of Player 1 : David
// Enter score of Player 1 : 60
// Enter name of Player 2 : Eve
// Enter score of Player 2 : 95

// Expected Output : -
// ------------------
// Winner : Eve
// Points difference : 35



// #include<stdio.h>
// int main() {
//     char player1[20], player2[20];
//     int score1, score2;
//     scanf("%s", player1);
//     scanf(" %d", &score1);
//     scanf(" %s", player2);
//     scanf(" %d", &score2);
//     if (score1 == score2) {
//         printf("It's a tie!\nPoints difference: %d", score1 - score2);
//         return 0;
//     }
//     switch (score1 > score2) {
//     case 1: {
//         printf("Winner: %s\n", player1);
//         printf("Points difference: %d", score1 - score2);
//         break;
//     }
//     case 0: {
//         printf("Winner: %s\n", player2);
//         printf("Points difference: %d", score2 - score1);
//         break;

//     }
//     }

// }



// [Title:Determine the Number of Days in a Month Based on User Input]
// --------------------------------------------------------------------

// Problem Statement : -
// --------------------
// Write a C program that takes a month number(1 - 12) as input from the user and prints the number of days in that month using a switch statement.If the user enters a number outside the range of 1 - 12, the program should display an error message.

// Explanation : -
// --------------
// ->Use a switch statement to handle different cases for each month :
//     ->For months with 31 days(January, March, May, July, August, October, December), display "31 days".
//     ->For months with 30 days(April, June, September, November), display "30 days".
//     ->For February(month 2), print "28 or 29 days (depending on leap year)" (Leap years are not considered in this basic program).
//     ->For any invalid month number(not between 1 and 12), print "Invalid month number".

//     Program Logic : -
//     ----------------
//     Prompt the user to enter the month number(1 - 12).
//     Use a switch statement to check the month number and print the corresponding number of days.
//     If the input is invalid(not between 1 and 12), print an error message.

//     Test Case 1 :-[Valid Month with 31 Days]
//     --------------
//     Input : -
//     -------- -
//     Enter Month : 1

//     Output : -
//     -------- -
//     31 days


// #include<stdio.h>
// int main() {
//     int month;
//     scanf("%d", &month);
//     switch (month) {
//     case 1:printf("31 days");break;
//     case 2:printf("28 or 29 days (depending on leap year)");break;
//     case 3:printf("31 days");break;
//     case 4:printf("30 days");break;
//     case 5:printf("31 days");break;
//     case 6:printf("30 days");break;
//     case 7:printf("31 days");break;
//     case 8:printf("31 days");break;
//     case 9:printf("30 days");break;
//     case 10:printf("31 days");break;
//     case 11:printf("30 days");break;
//     case 12:printf("31 days");break;
//     default:printf("Invalid month number");

//     }
// }






// Write a C program to check whether a given Alphabet is vowel or consonant or Special character using Switch Case.

// Sample input : A
// Sample output : Vowel

// Sample input : B
// Sample output : Consonant

// Sample input : @
// Sample output : Special character
// Sample Input
// @
// Sample Output
// Special character




    // #include<stdio.h>
    // int main() {
    //     char ch;
    //     int ans;
    //     scanf("%c", &ch);
    //     if (!(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')) {
    //         printf("Special character");
    //         return 0;
    //     }
    //     ans = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    //     switch (ans) {
    //     case 1:printf("Vowel");break;
    //     case 0:printf("Consonant");break;
    //     }


    // }







// Write a C program to accept an ID from the user and display the corresponding department.

// ->IDs from 11 to 15 belong to the Software department.
// ->IDs from 16 to 20 belong to the Developer department.
// ->IDs from 21 to 23 belong to the Management department.

// Sample - run :-
// ------------ -

// Test Cases : -
// --------------

// | ---------------------------------------------------- - |
// |Test Case No.Input ID	Expected Output       |
// |---------------------------------------------------- - |
// |  1    	  11		Software department   |
// |  2		  16		Developer department  |
// |  3	 	  21		Management department |
// |  4 (Invalid)25		Invalid ID            |
// |---------------------------------------------------- - |
// Sample Input
// 11
// Sample Output
// Software department



// #include<stdio.h>
// int main() {
//     int id;
//     scanf("%d", &id);
//     if (id < 0) {
//         printf("Negative value not Allowed.");
//         return 0;
//     }
//     switch (id) {
//     case 11 ...15:printf("Software department");break;
//     case 16 ...20:printf("Developer department");break;
//     case 21 ...23:printf("Management department.");break;
//     default:printf("Invalid ID");
//     }
// }




// Write a C program to accept a user ID of 1001 and a password of 1010. Prompt the user to enter their ID.If the ID is valid, ask the user to enter their password.If the password is correct, display the name of the user.Otherwise, display "Incorrect Password".If the ID does not exist, display "Incorrect ID".

// Develop this program using a switch - case statement.

// Sample - run:-
//     ------------ -

//     Test - Case - 1 (Valid)
//     ------------------ -
//     Input : -
//     -------- -
//     User ID : 1001
//     Password : 1010
//     Expected Output : Display the user’s name(e.g., "User: John Doe").

//     Test - Case - 2 (Invalid Password)
//     ------------------------------
//     Input : -
//     --------
//     User ID : 1001
//     Password : 2020
//     Expected Output : "Incorrect Password"

//     Test - Case - 3 (Invalid ID)
//     ------------------------ -
//     Input : -
//     --------
//     User ID : 2000
//     Expected Output : "Incorrect ID"

//     Test - Case - 4 (Empty Input for ID)
//     --------------------------------
//     Input : -
//     --------
//     User ID : (no input)
//     Expected Output : "Incorrect ID"

//     Sample Input
//     1001
//     1010
//     Sample Output
//     Login Successfully Welcome Aniket





// #include<stdio.h>
// int main() {
//     int userId, password;
//     scanf("%d", &userId);
//     switch (userId) {
//     case 1001: {
//         scanf("%d", &password);
//         switch (password) {
//         case 1010:printf("Login Successfully Welcome John");break;
//         default:printf("Incorrect Password");
//         }
//     }
//              break;
//     default:printf("Incorrect ID");
//     }
// }