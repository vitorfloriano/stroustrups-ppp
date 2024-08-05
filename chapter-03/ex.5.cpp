#include<iostream>

int unumber, guess,fguess, nguess, pguess;
constexpr int limit = 100;

void askForNumber() {

	std::cout << "Type a number from 1 to 100:" << std::endl;
	std::cin >> unumber;

}

char askAboutNumber() {

	guess = fguess;	
	std::cout << "Is the number you thought about bigger than " << guess << "?" << std::endl;
	char a;
	std::cin >> a;
	if (a == 'y') {
		
	}		

	return a;
}

int main()
{
	askForNumber();
	askAboutNumber();

	return 0;
}	
