#include <iostream>
#include <string>
#include <vector>

int main()
{
	double a;
	double smallest, largest;
	bool firstInput = true;

	while (std::cin >> a) {

		std::cout << "You typed " << a << std::endl;

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
