
#include "pch.h"
#include <iostream>

using namespace std;

bool menuSelection(char userInput, double &totalPrice); // If set to true then program exits. 

char toppingChoice(); // Returns users choice of topping.

void printOrder(char item); // Prints items in the order.






int main()
{
	bool exitControl;  // Controls when to exit the program.

	exitControl = false;

	double totalPrice = 0.00;      // Contains the full price of all selected items.

	char items[10];

	for (int i = 0; i < 10; i++)
		items[i] = ' ';


	while (exitControl != true)
	{

		cout << "Please select an item:" << endl;

		cout << "------------------------" << endl;

		cout << "A. Small Pizza:   $4.99" << endl;

		cout << "B. Medium Pizza:  $11.99" << endl;

		cout << "C. Large Pizza:   $14.99" << endl;

		cout << "D. Cheese Sticks: $5.99" << endl;

		cout << "E. Chicken Wings: $6.99" << endl;

		cout << "F. Bread Sticks:  $5.99" << endl;

		cout << "G. Pasta:         $7.99" << endl;

		cout << "H. Small Drink:   $0.99" << endl;

		cout << "I. Medium Drink:  $1.99" << endl;

		cout << "J. Large Drink:   $2.99" << endl;

		cout << "------------------------" << endl;

		cout << "Type X to exit and complete your order." << endl << endl;

		char userInput;

		cin >> userInput;

		cout << endl;

		exitControl = menuSelection(userInput, totalPrice);

		for (int i = 0; i < 10; i++)    // Stores order items in array for printing later.
		{
			if (items[i] == ' ')
			{
				items[i] = userInput;
				break;
			}
			
		}

		

		cout << "Current total: $" << totalPrice << endl << endl;

	}

	system("CLS");

	

	for (int i = 0; i < 10; i++)
	{
		
		if (items[i] != ' ')
		printOrder(items[i]);
	}

	

	cout << "Order Complete" << endl;

	cout << "------------------------" << endl;

	cout << "Order total: $" << totalPrice << endl;

	cout << "------------------------" << endl;

	return 0;

}

bool menuSelection(char userInput, double &totalPrice)        // Shows what item is selected and adds to the total price of the order.
{
	switch (userInput)
	{
	case 'A':
		cout << "Small Pizza selected. " << endl << endl;
		totalPrice = totalPrice + 4.99;
		return false;

	case 'B':
		cout << "Medium Pizza selected. " << endl << endl;
		totalPrice = totalPrice + 11.99;
		return false;

	case 'C':
		cout << "Large Pizza selected." << endl << endl;
		totalPrice = totalPrice + 14.99;

		return false;

	case 'D':
		cout << "Cheese sticks selected." << endl << endl;
		totalPrice = totalPrice + 5.99;
		return false;

	case 'E':
		cout << "Chicken wings selected." << endl << endl;
		totalPrice = totalPrice + 6.99;
		return false;

	case 'F':
		cout << "Bread sticks selected." << endl << endl;
		totalPrice = totalPrice + 5.99;

		return false;

	case 'G':
		cout << "Pasta selected." << endl << endl;
		totalPrice = totalPrice + 7.99;
		return false;

	case 'H':
		cout << "Small drink selected." << endl << endl;
		totalPrice = totalPrice + 0.99;
		return false;

	case 'I':
		cout << "Medium drink selected." << endl << endl;
		totalPrice = totalPrice + 1.99;
		return false;

	case 'J':
		cout << "Large drink selected." << endl << endl;
		totalPrice = totalPrice + 2.99;
		return false;

	case 'X':
		cout << "Exiting." << endl << endl;
		
		return true;

	default:
		cout << "Unexpected input." << endl << endl;
		break;
		



	}
}

char toppingChoice()  // Menu for toppings on the pizza.
{

	char userChoice;

	cout << "Please select a topping:" << endl;

	cout << "------------------------" << endl;

	cout << "A. Pepperoni" << endl;

	cout << "B. Sausage" << endl;

	cout << "C. Jalepenos" << endl;

	cout << "D. Pineapple" << endl;

	cout << "E. Ham" << endl;

	cout << "F. Cheese" << endl;

	cout << "------------------------" << endl;

	cin >> userChoice;

	system("CLS");

	return userChoice;


}


void printOrder(char item)     // Prints the order after the user exits the menu.
{

	char topping;

	switch (item)
	{
	case 'A':
		topping = toppingChoice();

		if (topping == 'A')
		{
			cout << "Small Pepperoni Pizza: $4.99" << endl << endl;
			break;
		}

		if (topping == 'B')
		{
			cout << "Small Sausage Pizza: $4.99" << endl << endl;
			break;
		}

		if (topping == 'C')
		{
			cout << "Small Pizza With Jalepenos: $4.99" << endl << endl;
			break;
		}

		if (topping == 'D')
		{
			cout << "Small Pizza With Pineapples: $4.99" << endl << endl;
			break;
		}

		if (topping == 'E')
		{
			cout << "Small Ham Pizza: $4.99" << endl << endl;
			break;
		}

		if (topping == 'F')
		{
			cout << "Small Cheese Pizza: $4.99" << endl << endl;
			break;
		}

	case 'B':
		topping = toppingChoice();

		if (topping == 'A')
		{
			cout << "Medium Pepperoni Pizza: $4.99" << endl << endl;
			break;
		}

		if (topping == 'B')
		{
			cout << "Medium Sausage Pizza: $4.99" << endl << endl;
			break;
		}

		if (topping == 'C')
		{
			cout << "Medium Pizza With Jalepenos: $4.99" << endl << endl;
			break;
		}

		if (topping == 'D')
		{
			cout << "Medium Pizza With Pineapples: $4.99" << endl << endl;
			break;
		}

		if (topping == 'E')
		{
			cout << "Medium Ham Pizza: $4.99" << endl << endl;
			break;
		}

		if (topping == 'F')
		{
			cout << "Medium Cheese Pizza: $4.99" << endl << endl;
			break;
		}
		break;

	case 'C':
		topping = toppingChoice();

		if (topping == 'A')
		{
			cout << "Large Pepperoni Pizza: $4.99" << endl << endl;
			break;
		}

		if (topping == 'B')
		{
			cout << "Large Sausage Pizza: $4.99" << endl << endl;
			break;
		}

		if (topping == 'C')
		{
			cout << "Large Pizza With Jalepenos: $4.99" << endl << endl;
			break;
		}

		if (topping == 'D')
		{
			cout << "Large Pizza With Pineapples: $4.99" << endl << endl;
			break;
		}

		if (topping == 'E')
		{
			cout << "Large Ham Pizza: $4.99" << endl << endl;
			break;
		}

		if (topping == 'F')
		{
			cout << "Large Cheese Pizza: $4.99" << endl << endl;
			break;
		}
		break;

	case 'D':
		cout << "Cheese sticks: $5.99" << endl << endl;
		break;

	case 'E':
		cout << "Chicken wings: $6.99" << endl << endl;
		break;

	case 'F':
		cout << "Bread sticks: $5.99" << endl << endl;
		break;

	case 'G':
		cout << "Pasta: $7.99" << endl << endl;
		break;

	case 'H':
		cout << "Small drink: $0.99" << endl << endl;
		break;

	case 'I':
		cout << "Medium drink: $1.99" << endl << endl;
		break;
	case 'J':
		cout << "Large drink: $2.99" << endl << endl;
		break;

	case 'X':
		break;

	default:
		cout << "Unexpected input." << endl << endl;
		break;




	}

}


