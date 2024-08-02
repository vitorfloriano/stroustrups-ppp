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

double findGreatDist(std::vector<double> ds) {
	double greatdist;
	bool firstdist = true;
	for (double i : ds) {
		if (firstdist) {
			firstdist = false;
			greatdist = i;
		} else if (i > greatdist) {
			greatdist = i;
		}
	}

	return greatdist;
}

double findMean(std::vector<double> ds) {
	double accum;
	double mean;
	for (double i : ds) {
		accum += i;
		mean = accum / ds.size();	
	}	
	return mean;
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
		  << "The smallest of all the distances is " << findSmallDist(dists) << "." << std::endl
		  << "The greatest of all the distances is " << findGreatDist(dists) << "." << std::endl
		  << "The mean of all the distances is " << findMean(dists) << "." << std::endl;
	
	return 0;
}
