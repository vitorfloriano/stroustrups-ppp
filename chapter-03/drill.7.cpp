#include <iostream>
#include <string>
#include <vector>

int main()
{
	double a;
	std::string currency;
	double smallest, largest;
	bool firstInput = true;
	constexpr double cmToMeters = 0.01;
	constexpr double mToMeters = 1.00;
	constexpr double inToMeters = 0.0254;

	while (std::cin >> a >> currency) {
		
		switch (currency) {
			case "cm": {
			a *= cmToMeters;
			} break;
			case "m": {
			a *= mToMeters;
			} break;
			case "in": {
			a *= inToMeters;
			} break;
		}

		std::cout << "You typed " << a << " " << currency << " meters." << std::endl;

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
