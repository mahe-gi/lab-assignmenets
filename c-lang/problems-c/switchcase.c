// 1)
// Write a C program that reads a float value and a character from the console. The character can be 'd' for deposit or 'w' for withdrawal.

// Start with a minimum balance of 2000.

// -> Prompt the user to initialize the minimum balance. Do not allow 0 or negative values. If the balance is 0 or negative, print: "Amount can't be stored".
// -> If the user chooses the deposit operation, ask how much amount they want to deposit. Add that amount to the balance and print the updated balance.
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