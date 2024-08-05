#include<iostream>

void askForNumber() {

	std::cout << "Think about a number from 1 to 100, but don't type it" << std::endl;

}

constexpr int fguess = 50;

char askAboutNumber() {
	int guess;
	int nguess;
	guess = fguess;	
	std::cout << "Is the number you thought about bigger than " << guess << std::endl;
	char a;
	std::cin >> a;
	if (a == 'y') {
		guess /= 2;
		nguess += guess;
		std::cout << "Is it " << nguess << " then?" << std::endl;
	}		

	return a;
}

int main()
{
	askForNumber();
	askAboutNumber();

	return 0;
}	
