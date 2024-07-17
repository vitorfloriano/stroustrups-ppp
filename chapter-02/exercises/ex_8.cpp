#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an integer value: " << endl;
	int value;
	cin >> value;
	int modulo = value % 2;
	if (modulo ==  0)
		cout << "The value " << value << " is even." << endl;
	else
		cout << "The value " << value << " is odd." << endl;

	return 0;
}
