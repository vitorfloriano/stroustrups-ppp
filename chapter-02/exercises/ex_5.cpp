#include <iostream>
using namespace std;

int main()
{
	// returns the smallest of two integers
	
	double val1;
	double val2;
	cout << "Enter two floating-point values: " << endl;
	cin >> val1;
	cin >> val2;
	double smallest;
	double largest;
	
	if (val1 < val2)
		smallest = val1;
	else
		smallest = val2;
	if (val1 > val2)
		largest = val1;
	else
		largest = val2;

	cout << "The smallest of the two floating-point is " << smallest << "." << endl;
	cout << "The largest of the two floating-point is " << largest << "." << endl;
	cout << "The sum of the two floating-point is " << val1 + val2 << "." << endl;
	cout << "The difference of the two floating-point is " << largest - smallest << "." << endl;
	cout << "The product of the two floating-point is " << val1 * val2 << "." << endl;
	cout << "The ratio of the two floating-point is " << largest * 1.0 / smallest << "." << endl;
	
	return 0;
}
