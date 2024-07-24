#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::vector<std::string> dislikes = {"bolsonaro","michele","queiroz"};
	std::vector<std::string> words;

	for (std::string temp; std::cin >> temp;)
	{
		words.push_back(temp);
	}

	for (int i = 0; i < words.size(); ++i)
	{
		if (std::find(dislikes.begin(),dislikes.end(),words[i])!=dislikes.end())
		{
			std::cout << "BLEEP" << std::endl;
		}
		else
		{
			std::cout << words[i] << std::endl;
		}
	}

	return 0;
}
