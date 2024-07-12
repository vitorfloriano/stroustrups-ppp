#include <iostream>
using namespace std;

char c = 'x';
int i1 = c;
int i2 = c + 1000;	
double d = i2 + 7.3;

double x = 2.7;
int y = x;

int main()
{
	double d = 0;
	while (cin>>d) {
		int i = d;
		char c = i;
		cout << "d==" << d
			<< " i==" << i
			<< " c==" << c
			<< " char(" << c << ")\n";
	}
}
