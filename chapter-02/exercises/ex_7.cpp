#include <iostream>
using namespace std;

int main()
{
	cout << "Please, enter three first names: " << endl;
	string val1, val2, val3;
	string temp;
	cin >> val1 >> val2 >> val3;

	if (val1 > val2 )
	temp = val1;
	if (temp > val3)
	temp = val3;	

	return 0;
}
