#include <iostream>

constexpr int limit = 100;

void guessNumber() {
	int low = 1;
	int high = limit;
	int mid;
	char response;

	std::cout << "Think of a number between 1 and 100.\n";
	std::cout << "I will try to guess it by asking no more than 7 questions.\n";

	for (int i = 0; i < 7; ++i) {
		mid = (low + high) / 2;
		std::cout << "Is the number you are thinking of greater than " << mid << "? (y/n): ";
		std::cin >> response;

		if (response == 'y' || response == 'Y') {
			low = mid + 1;
		} else {
			high = mid;
		}

		// If the range has narrowed to a single number, we can stop early

		if (low == high) {
			break;
		}
	}

	// After the loop, low and high should be the same

	std::cout << "The number you are thinking of is " << low << "!\n";
}

int main() {
	guessNumber();
	return 0;
}
