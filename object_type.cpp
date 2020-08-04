#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open(){char ch; cin>>ch;}

int main ()
{
	int value{120};
	std::cout << "int:" <<  value << "char:" << static_cast<char>(value);
	//std::cout << "int:" <<  value << "char:" << reinterpret_cast<char>(value);
	//keep_window_open();
	return 0;
}
