#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open(){char ch; cin>>ch;}

int main ()
{
	std::cout << "Please enter you name and age\n";
	string first_name{};
	int age{0};
	cin >> first_name >> age;
	cout <<"Hello " << first_name << ":" << age <<"\n";
	//keep_window_open();
	return 0;
}
