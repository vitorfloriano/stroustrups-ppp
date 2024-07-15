#include <iostream>
using namespace std;

int main()
{
	double miles;
	cout << "Enter the distance in miles: \n";
	cin >> miles;
	double result = miles * 1.609;
	cout << miles << " miles equals " << result << " kilometers." << endl;
	
	return 0;
}
