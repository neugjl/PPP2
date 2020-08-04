#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open(){char ch; cin>>ch;}

int main ()
{
	double value{120};
	while(cin >> value)
	{
		int i = value; 	
		char c = i;
		int i2 = c;
		cout << " double: " << value
			<< " int: " << i
			<< " int2: " << i2
			<< " char: " << c 
			<< " 9.0/5*value+32 =" << 9.0/5*value+32
			<< "\n";
	}
	return 0;
}
