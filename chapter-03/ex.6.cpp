#include <iostream>

void calc() {
	double arg1, arg2, result;
	char operation;

	std::cout << "Enter two double values and a character to represent an operation:" << std::endl;
	
	while (std::cin >> arg1 >> operation >> arg2) {
		switch (operation) {
		case '+':
			result = arg1 + arg2;
			std::cout << "The sum of " << arg1 << " and " << arg2 << " is " << result << "." << std::endl;
			break;
		case '-':
			result = arg1 - arg2;
			std::cout << "The subtraction of " << arg2 << " from " << arg1 << " is " << result << "." << std::endl;
			break;
		case '/':
			result = arg1 / arg2;
			std::cout << "The division of " << arg1 << " by " << arg2 << " is " << result << "." << std::endl;
			break;
		case '*':
			result = arg1 * arg2;
			std::cout << "The multiplication of " << arg1 << " by " << arg2 << " is " << result << "." << std::endl;
			break;
		}
	}
}

int main() {
	calc();
	return 0;
}
