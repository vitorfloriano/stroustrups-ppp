#include <iostream>
#include <string>
#include <vector>

int main()
{
	int a = 0;
	int b = 0;

	while (std::cin >> a >> b){

		std::cout << "You typed " << a << " and " << b << std::endl;
		
		if (a < b) {
			std::cout << "The smaller value is: " << a << std::endl;
			std::cout << "The larger value is: " << b << std::endl;
		} else {
			std::cout << "The smaller value is: " << b << std::endl;
			std::cout << "The larger value is: " << a << std::endl;
		}
	}
	return 0;
}
