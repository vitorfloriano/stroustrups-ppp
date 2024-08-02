#include <iostream>
#include <vector>
#include <string>

double dist;
std::vector<double> dists;

double totalDistance(std::vector<double> ds) {
	double accum;
	for (double i : ds) {
		accum += i;
	}

	return accum;
}

double findSmallDist(std::vector<double> ds) {
	double smalldist;
	bool firstdist = true;
	for (double i : ds) {
		if (firstdist) {
			firstdist = false;
			smalldist = i;
		} else if (i < smalldist) {
			smalldist = i;
		} 
	}	

	return smalldist;
}

int main() 
{
	while (std::cin >> dist) {
		dists.push_back(dist);
	}
	
	std::cout << "The numbers you typed were ";

	for (int i = 0; i < dists.size(); i++) {
		 if (i == 0) {
			std::cout << dists[i];
		 } else if (i == (dists.size() - 1)) {
			std::cout << " and " << dists[i] << "." << std::endl;
		 } else {
			std::cout << ", " << dists[i];
		 }
	}

	std::cout << "The sum of all the distances is " << totalDistance(dists) << "." << std::endl
		  << "The smallest of all the distances is " << findSmallDist(dists) << "." << std::endl;
	
	return 0;
}
