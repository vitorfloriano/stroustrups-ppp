#include <iostream>

double calc() {
	double arg1, arg2, result;
	char operation;

	std::cout << "Enter two double values and a character to represent an operation:" << std::endl;
	
	while (std::cin >> arg1 >> operation >> arg2) {
		switch (operation) {
		case '+':
			result = arg1 + arg2;
			std::cout << result << std::endl;
			break;
		case '-':
			result = arg1 - arg2;
			std::cout << result << std::endl;
			break;
		case '/':
			result = arg1 / arg2;
			std::cout << result << std::endl;
			break;
		case '*':
			result = arg1 * arg2;
			std::cout << result << std::endl;
			break;
		}
	}

	return result;
}

int main() {
	calc();
	return 0;
}
