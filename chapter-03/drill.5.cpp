#include <iostream>
#include <string>
#include <vector>

int main()
{
	double a = 0.0;
	double b = 0.0;
	double diff = 1.0;

	while (std::cin >> a >> b){

		std::cout << "You typed " << a << " and " << b << std::endl;
		
		if (a != b) {
			
			if (a < b) {
				std::cout << "The smaller value is: " << a << std::endl;
				std::cout << "The larger value is: " << b << std::endl;
			} else {
				std::cout << "The smaller value is: " << b << std::endl;
				std::cout << "The larger value is: " << a << std::endl;
			}

			double abs_diff;
			if (a < b) {
				abs_diff = b - a;
			} else {
				abs_diff = a - b;
			}
			
			if (abs_diff < diff) {
				std::cout << "The numbers are almost equal" << std::endl;
			}

		} else {
			std::cout << "The numbers are equal" << std::endl;
		}
	}
	return 0;
}
