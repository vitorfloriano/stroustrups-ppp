#include <iostream>
using namespace std;

int main()
{
	int val1;
	int val2;
	int val3;
	cout << "Enter 3 integers: " << endl;
	cin >> val1;
	cin >> val2;
	cin >> val3;

	// I'm not proud of the following piece of software, but it works.	
	
	if (val1 < val2)
		if (val2 < val3)
			cout << val1 << ", " << val2 << ", " << val3 << endl;
	if (val1 < val3)
		if (val2 > val3)
			cout << val1 << ", " << val3 << ", " << val2 << endl;
	if (val2 < val1)
		if (val1 < val3)
			cout << val2 << ", " << val1 << ", " << val3 << endl;
	if (val2 < val3)
		if (val1 > val3)
			cout << val2 << ", " << val3 << ", " << val1 << endl;
	if (val3 < val1)
		if (val1 < val2)
			cout << val3 << ", " << val1 << ", " << val2 << endl;
	if (val3 < val1)
		if (val1 > val2)
			if (val3 < val2)
				cout << val3 << ", " << val2 << ", " << val1 << endl;

	return 0;
}	
