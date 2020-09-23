
#include <iostream>

using namespace std;

bool menuSelection(char userInput); // If set to true then program exits. 

int main()
{
	bool exitControl;  // Controls when to exit the program.

	exitControl = false;

	while (exitControl != true)
	{

		cout << "Please select an option:" << endl;

		cout << "------------------------" << endl;

		cout << "Item A" << endl;

		cout << "Item B" << endl;

		cout << "Item C" << endl;

		cout << "Item D" << endl;

		cout << "Item E" << endl;

		cout << "Item F" << endl;

		cout << "Item G" << endl;

		cout << "Item H" << endl;

		cout << "Item I" << endl;

		cout << "Item J" << endl;

		cout << "------------------------" << endl;

		cout << "Type X to exit." << endl << endl;

		char userInput;

		cin >> userInput;

		cout << endl;

		exitControl = menuSelection(userInput);

	}

	return 0;

}

bool menuSelection(char userInput)
{
	switch (userInput)
	{
	case 'A':
		cout << "Item A not implemented." << endl << endl;
		break;

	case 'B':
		cout << "Item B not implemented." << endl << endl;
		break;

	case 'C':
		cout << "Item C not implemented." << endl << endl;
		break;

	case 'D':
		cout << "Item D not implemented." << endl << endl;
		break;

	case 'E':
		cout << "Item E not implemented." << endl << endl;
		break;

	case 'F':
		cout << "Item F not implemented." << endl << endl;
		break;

	case 'G':
		cout << "Item G not implemented." << endl << endl;
		break;

	case 'H':
		cout << "Item H not implemented." << endl << endl;
		break;

	case 'I':
		cout << "Item I not implemented." << endl << endl;
		break;

	case 'J':
		cout << "Item J not implemented." << endl << endl;
		break;

	case 'X':
		cout << "Exiting." << endl << endl;
		return true;

	default:
		cout << "Unexpected input." << endl << endl;
		break;
		



	}
}

