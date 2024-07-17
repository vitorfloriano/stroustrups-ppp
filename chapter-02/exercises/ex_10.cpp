#include <iostream>
using namespace std;

int main()
{
	cout << "Enter one operation and two operands: " << endl;
	string operation;
	double operand1;
	double operand2;

	cin >> operation >> operand1 >> operand2;

	if (operation == "+")
		cout << operand1 + operand2 << endl;
	if (operation == "-")
		cout << operand1 - operand2 << endl;
	if (operation == "/")
		cout << operand1 / operand2 << endl;
	if (operation == "*")
		cout << operand1 * operand2 << endl;

	return 0;
}	
