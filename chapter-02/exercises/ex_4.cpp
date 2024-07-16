#include <iostream>
using namespace std;

int main()
{
	// returns the smallest of two integers
	
	int val1;
	int val2;
	cout << "Enter two integer values: " << endl;
	cin >> val1;
	cin >> val2;
	int smallest;
	int largest;
	
	if (val1 < val2)
		smallest = val1;
	else
		smallest = val2;
	if (val1 > val2)
		largest = val1;
	else
		largest = val2;

	cout << "The smallest of the two integers is " << smallest << "." << endl;
	cout << "The largest of the two intergers is " << largest << "." << endl;
		
	return 0;
}
