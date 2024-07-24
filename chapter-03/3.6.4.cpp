#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
	std::vector<std::string> words;
	for (std::string temp; std::cin >> temp;)
	{
		words.push_back(temp);
	}

	std::cout << "Number of words: " << words.size() << std::endl;

	std::sort(words.begin(),words.end());

	for (int i = 0; i < words.size(); ++i)
	{
		if (i == 0 || words[i-1] != words[i])
		{
			std::cout << words[i] << std::endl;
		}
	}
	return 0;
}
