// while statements
#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';
	int letter_number = 1;
	while (letter <= 'z')
	{
		cout << letter << "\t" << letter_number << endl;
		++letter;
		++letter_number;
	}
}
