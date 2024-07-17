#include <iostream>
using namespace std;

int main()
{
	cout << "Write a spelled-out number: " << endl;
	string number;
	cin >> number;

	if (number == "zero")
		cout << "0" << endl;
	if (number == "one")
		cout << "1" << endl;
	if (number == "two")
		cout << "2" << endl;
	else
		cout << "Not a number I know" << endl;
	return 0;
}
