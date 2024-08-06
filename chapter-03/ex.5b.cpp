#include <iostream>

void initRange(int& minValue, int& maxValue) {
	minValue = 1;
	maxValue = 100;
	std::cout << "Think of a number between 1 and 100." << std::endl;
	std::cout << "I'll try to guess it by asking no more than 7 questions." << std::endl;
}

char askQuestion(int guess) {
	std::cout << "Is the number you're thinking of greater than " << guess << "? (y/n): ";
	char response;
	std::cin >> response;
	return response;
}

void updateRange(char response, int& minValue, int& maxValue, int midValue) {
	if (response == 'y' || response == 'Y') {
		minValue = midValue + 1;
	} else {
		maxValue = midValue;
	}
}

void guessNumber() {
	int minValue, maxValue, midValue;
	char response;

	initRange(minValue, maxValue);

	for (int i = 0; i < 7; i++) {
		midValue = (minValue + maxValue) / 2;
		response = askQuestion(midValue);
		updateRange(response, minValue, maxValue, midValue);

		if (minValue == maxValue) {
			break;
		}
	}

	std::cout << "The number you're thinking of is " << minValue << "!" << std::endl;
}

int main() {
	guessNumber();
	return 0;
}
