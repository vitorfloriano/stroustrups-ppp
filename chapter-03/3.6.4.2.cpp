#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::string dislikes = "bolsonaro";
	std::vector<std::string> words;

	for (std::string temp; std::cin >> temp;)
	{
		words.push_back(temp);
	}

	for (int i = 0; i < words.size(); ++i)
	{
		if (words[i] != dislikes)
		{
			std::cout << words[i] << std::endl;
		}
		else
		{
			std::cout << "BLEEP" << std::endl;
		}
	}

	return 0;
}
