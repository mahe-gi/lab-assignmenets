// Que 1:
// --------
// Write a C program for a service center by following given Rules and Guide lines.

// -> This service center only accepts 2 wheeler ,3 wheeler & 4 wheeler . If any other vehicle

// came to you , you have to show a message that "this service center is not accepting

// other than 2 wheeler, 3 wheeler and 4 wheeler".

// -> If the vehicle is 2 ,3 & 4 only then you have to ask the user what is the age of the vehicle.

// -> If the age your vehicle is above 8 months then only accept the service center

// otherwise you have to show a message that "your vehicle servie will done after a while".

// -> If the vehicle age is greater than 8 months then show options to the user on the console.

// Options:
// --------

// 1)Enter 1 for tyre problem

// 2)Enter 2 for fuel problem

// 3)Enter 3 for engine issue

// 4)Enter 4 for general services

// -> If the user enter 1 as input so it is tyre problem statement so you have to show a message "how many tyres you are facing the issue ?", based on the issue on the no of tyres,

// generate the bill.

// -> For example tyre cost Rs. 400 , if the user providing 3 tyre then the bill should be

// generated as Rs. 1200 in below format.

// Name of the owener

// Name of the bike

// Issue

// Bill

// -> For fuels problem cost is Rs.1500

// -> For engine issue cost is Rs.5000

// -> For general servicing cost is Rs.1000

// And generate the bill in the above format.

// ==================================================

#include <stdio.h>
int main()
{
    int vehcletype;
}

// Que 2:
// --------
// Write a C program to determine whether a person is eligible to get married in India or not, based on their age, gender, and nationality.

// 	-->The program should read three inputs from the user:

// 	1. Age of the person
// 	2. Gender of the person (Male/Female)
// 	3. Nationality of the person (for Indian 'i' or 'I')

// 	-->The program should first check the nationality of the person. If the person is not an Indian citizen, the program should print "You are not an Indian citizen, cannot get married in India"

// 	-->If the person is an Indian citizen, the program should then check their age and gender to determine if they are eligible to get married.

// 	- If the person is a male, they must be at least 21 years old to get married.
// 	- If the person is a female, they must be at least 18 years old to get married.

// 	-->Eligible to get married in India" if the person meets all the criteria (age, gender, and nationality)
// - "Not eligible to get married in India" if the person does not meet the age or gender criteria

// case 1:

// input :
// 	Enter your age: 28
// 	Enter your gender (M/F): m
// 	Enter your nationality (i or I  for Indian): I
// output:
// 	Eligible to get married in India

// case 2:

// input :
// 	Enter your age: 28
// 	Enter your gender (M/F): m
// 	Enter your nationality (i or I  for Indian): c
// output:
// 	You are not an Indian citizen

// =========================================

// Que 3 :
// --------

// Title: Interactive Tea Stall Experience

// Introduction:

// Imagine strolling down a charming street, enticed by the inviting aroma of freshly brewed beverages.

// You arrive at a cozy tea stall, greeted by a friendly attendant. Prepare for an interactive journey through the Tea Stall Counter!

// Scenario:

// Welcome and Menu:

// You enter the tea stall, warmly welcomed by the attendant:

// Attendant: "Welcome to our Tea Stall Counter! Our menu:"

// Tea --------------------- Rs. 10

// Coffee ------------------ Rs. 20

// Cold coffee ------------- Rs. 50

// Exit

// Attendant: "Choose by entering a number (1-4):"

// [User enters choice]

// Customize Order:

// Based on your choice, the attendant guides you:

// [If choice is 1:]

// Attendant: "How many cups of refreshing tea?"

// [If choice is 2:]

// Attendant: "How many cups of aromatic coffee?"

// [If choice is 3:]

// Attendant: "How many cups of chilled cold coffee?"

// [User enters quantity]

// Total and Payment:

// The attendant shares your order total and awaits payment:

// Attendant: "Total for [quantity] cup(s): Rs. [total_price]."

// Attendant: "Enter your payment amount: Rs."

// [User enters amount_paid]

// Attendant: "Change: Rs. [change]."

// Continuation or Farewell:

// Choose to explore more or conclude your visit:

// Attendant: "Explore more or finalize? (Type 'Y' for Yes or 'N' for No):"

// [User enters order_again]

// [If user wants to continue:]

// Attendant: "Certainly, let's explore."

// [If user doesn't want to continue:]

// Attendant: "Thank you for visiting! We look forward to serving you again soon!"