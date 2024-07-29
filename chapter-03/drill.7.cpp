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

	while (std::cin >> a >> unit) {
		
		if (unit == "cm") {
			std::cout << "You typed " << a << unit << " " << "which equals to " << a * cmToMeters << " meters." << std::endl;
		} else if (unit == "m") {
			std::cout << "You typed " << a << unit << " " << "which equals to " << a * mToMeters << " meters." << std::endl;
		} else if (unit == "in") {
			std::cout << "You typed " << a << unit << " " << "which equals to " << a * inToMeters << " meters." << std::endl;
		} else {
			std::cout << "Illegal" << std::endl;
		} 

		if (firstInput) {
			smallest = a;
			largest = a;
			firstInput = false;
		}
		
		if (a <= smallest) {
			smallest = a;
			std::cout << "The smallest so far" << std::endl;	
		}

		if (a > largest) {
			largest = a;
			std::cout << "The largest so far" << std::endl;
		}
	}	
	
	return 0;
}
