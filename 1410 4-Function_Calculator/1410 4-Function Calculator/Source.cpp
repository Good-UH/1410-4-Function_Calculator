/*
Write a program with 4 functions, for addition, subtraction, division, and multiplication
ASSUME THE USER ENTER VALID POSITIVE INTEGERS
*/

#include <iostream>
using namespace std;

void multiplication(int a, int b);
void division(int a, int b);
void addition(int a, int b);
void subtraction(int a, int b);
bool isChoiceValid(int x);
void print();

int result = 0;

void main()
{
	int nb1 = 0, nb2 = 0, choice = 0;

	do {
		print();
		cout << "\n\n\tEnter your choice: ";
		cin >> choice;
		if (choice == 1) 
		{
			cout << "\nYou selected Addition!\nPlease enter the first number: ";
			cin >> nb1;
			cout << "\nPlease enter the second number: ";
			cin >> nb2;
			addition(nb1, nb2);
		}
		else if (choice == 2) {
			cout << "\nYou selected Subtraction!\nPlease enter the first number: ";
			cin >> nb1;
			cout << "\nPlease enter the second number: ";
			cin >> nb2;
			subtraction(nb1, nb2);
		}
		else if (choice == 3) 
		{
			cout << "\nYou selected Multiplication!\nPlease enter the first number: ";
			cin >> nb1;
			cout << "\nPlease enter the second number: ";
			cin >> nb2;
			multiplication(nb1, nb2);
		}
		else if (choice == 4) 
		{
			cout << "\nYou selected Division!\nPlease enter the first number: ";
			cin >> nb1;
			cout << "\nPlease enter the second number: ";
			cin >> nb2;
			division(nb1, nb2);
		}
		else if (choice == 5)
		{
			cout << "\nThank You for using the 4-Function Calculator Program!\n";
			system("pause");
			exit(0);
		}
	} while (isChoiceValid(choice) == true);
	system("pause");
}

void multiplication(int a, int b)
{
	result = (a*b);
	cout << "\nYour result is: " << result << endl << endl;
}

void division(int a, int b)
{
	result = (a/b);
	cout << "\nYour result is: " << result << endl << endl;
}

void addition(int a, int b)
{
	result = (a+b);
	cout << "\nYour result is: " << result << endl << endl;
}

void subtraction(int a, int b)
{
	result = (a-b);
	cout << "\nYour result is: " << result << endl << endl;
}

bool isChoiceValid(int x)
{
	if (x == 1 || x == 2 || x == 3 || x == 4) {
		return true;
	}
	else {
		cout << "Invalid Input!\nProgram Closing!\nCome back soon!\n";
		return false;
	}
}

void print()
{
	cout << "\tMenu\n";
	cout << "-----------------------------\n";
	cout << "\t1- Addition\n";
	cout << "\t2- Subtraction\n";
	cout << "\t3- Multiplication\n";
	cout << "\t4- Division\n";
	cout << "\t5- Exit\n";
}
