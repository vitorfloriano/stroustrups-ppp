#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<double> temps;
	for (double temp; std::cin >> temp;)
	{
		temps.push_back(temp);
	}

	// compute mean temperature:
	
	double sum = 0;
	for (double x : temps)
	{
		sum += x;
	}
	std::cout << "Average temperature: " << sum / temps.size() << std::endl;

	// compute median temperaure:
	
	std::sort(temps.begin(),temps.end());
	std::cout << "Median temperature: " << temps[temps.size()/2] << std::endl;
}
