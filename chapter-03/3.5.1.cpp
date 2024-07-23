#include <iostream>

int square(int x)
{
	int result = 0;
	for (int i = 1; i <= x; i++)
	{
		result += x ;
	}
	return result;
}

int main() 
{
	int a = 0;
	std::cout << "Enter a number: " << std::endl;
	std::cin >> a;
	for (int b = 1; b <= a; b++)
	{
		std::cout << b << "\t" << square(b) << std::endl;
	}	
	
	return 0;
}
