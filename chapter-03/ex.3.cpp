#include <iostream>
#include <vector>
#include <algorithm>

std::vector<double> temps;
int index1;
int index2;
double median;

double findMedian(std::vector<double> vec) {

	if ((vec.size() % 2) == 0) {
		index1 = (vec.size() / 2);
		index1--;		
		index2 = (vec.size() / 2);
		median = (vec[index1]+vec[index2]) / 2;
	} else {
		median = vec[vec.size()/2];			
	}

	return median;
}

int main()
{
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
	std::cout << "Median temperature: " << findMedian(temps) << std::endl;

	return 0;
}
