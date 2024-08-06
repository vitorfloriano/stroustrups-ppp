#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numbers = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void checkInput() {
	int userInput;
	while (std::cin >> userInput) {
		switch (userInput) {
		case 1:
			std::cout << "one" << std::endl;
			break;
		}
	}
}

int main() {
	checkInput();
	return 0;
}
