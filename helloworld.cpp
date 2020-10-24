#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open(){char ch; cin>>ch;}

int main ()
{
	std::cout << "Hello world!\n";
	std::cout << "Here we go!\n";
	string input_buffer;
	ifstream input{"./helloworld.cpp"};
	if(input) {
		//input >> input_buffer;
		getline(input,input_buffer,'\x1A');
	} else {
		cerr<<"Can't open the file";	
	}
	cout << input_buffer;
	int x = 222'222;
	int y = 3;
	int& a = x;
	int& b = y;
	cout << &x << &y;
	cout << '\n';
	cout << a << b;
	cout << '\n';
	b=a;
	cout << a << b;
	cout << '\n';
	cout << &x << &y;
	cout << '\n';
	int intx = 3;
	cout << std::exp(std::log(intx)+std::log(3));
	cout << '\n';
	cout << std::exp(1) ;
	cout << '\n';
	//keep_window_open();
	return 0;
}
