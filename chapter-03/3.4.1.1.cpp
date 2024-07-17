#include <iostream>
using namespace std;

int main()
{
	constexpr double y2dol = 0.0064;
	constexpr double k2dol = 0.095;
	constexpr double p2dol = 1.30;

	double amount;
	char currency;

	cout << "Please enter an amount and a currency: " << endl;

	cin >> amount >> currency;

	if (currency == 'y')
		cout << amount << " yen equals to " << amount * y2dol << " dollars." << endl;

	return 0;
}
