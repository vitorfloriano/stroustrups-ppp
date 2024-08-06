#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numbers = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void checkInput() {
	int userInput;
	while (std::cin >> userInput) {
		switch (userInput) {
		case 0:
			std::cout << "zero" << std::endl;
			break;
		case 1:
			std::cout << "one" << std::endl;
			break;
		case 2:
			std::cout << "two" << std::endl;
			break;
		case 3:
			std::cout << "three" << std::endl;
			break;
		case 4:
			std::cout << "four" << std::endl;
			break;
		case 5:
			std::cout << "five" << std::endl;
			break;
		case 6:
			std::cout << "six" << std::endl;
			break;
		case 7:
			std::cout << "seven" << std::endl;
			break;
		case 8:
			std::cout << "eight" << std::endl;
			break;
		case 9:
			std::cout << "nine" << std::endl;
			break;
		}
	}
}

int main() {
	checkInput();
	return 0;
}
