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

std::string printDists(std::vector<double> d) {
	for (int i = 0; i < d.size(); i++) {
		 bool firstindex = true;
		 if (firstindex == true) {
			 firstindex = false;
			 std::cout << d[i];
		 } else if (i == (d.size() - 1)) {
			std::cout << d[i] << "." << std::endl;
		 } else {
			std::cout << ", " << d[i];
		 }
	}		
	return 0;
}


int main() {

	while (std::cin >> dist) {
		dists.push_back(dist);
	}
	
	std::cout << "The numbers you typed were: " << printDists(dists) << std::endl
		  << "The sum of all the distances is " << totalDistance(dists) << "." << std::endl
		  << "The smallest of all the distances is " << findSmallDist(dists) << "." << std::endl;
	
	return 0;
}
