#include <iostream>
#include <string>
#include <vector>

int main()
{
	double a;
	std::string unit;
	double smallest, largest;
	bool firstInput = true;
	constexpr double cmToMeters = 0.01;
	constexpr double mToMeters = 1.00;
	constexpr double inToMeters = 0.0254;
	double sum;

	while (std::cin >> a >> unit) {
		
		if (unit == "cm") {
			std::cout << "You typed " << a << unit << " " << "which equals to " << a * cmToMeters << " meters." << std::endl;
		a *= cmToMeters;
		} else if (unit == "m") {
			std::cout << "You typed " << a << unit << " " << "which equals to " << a * mToMeters << " meters." << std::endl;
		a *= mToMeters;
		} else if (unit == "in") {
			std::cout << "You typed " << a << unit << " " << "which equals to " << a * inToMeters << " meters." << std::endl;
		a *= inToMeters;
		} else {
			std::cout << "Illegal" << std::endl;
		} 

		sum += a;

		if (firstInput) {
			firstInput = false;
			smallest = a;
			largest = a;
		} else if (a <= smallest) {
			smallest = a;
		} else if (a > largest) {
			largest = a;
		}
	}

	std::cout << "The sum is " << sum << " meters." << std::endl
                  << "The smallest value entered was " << smallest << " meters." << std::endl
		  << "The largest value entered was " << largest << " meters." << std::endl;
	
	return 0;
}
