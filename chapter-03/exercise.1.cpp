#include <iostream>
#include <string>

std::string a;
int b;

int main() {
	while (std::cin >> a) {
		for (char i : a) {
			b = i;
			std::cout << i << " " << b << "\n";
		}	
	}
	return 0;
}	
