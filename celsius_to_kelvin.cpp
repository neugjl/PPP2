#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
constexpr double absolute_zero_in_celsius {-273.15};
class bad_input{
	public:
		bad_input(string s):message{s}{cout<<"bad_input constructor\n";}
		~bad_input(){cout<<"~bad_input destructor\n";}
		string what(){return message;}
	private:
		string message;
};
double celsius_to_kelvin(double celsius)
{
	if(celsius < absolute_zero_in_celsius)
	{	   
		cerr<<"Invalid input\n";
		throw bad_input(__func__);
	}
	double kelvin = celsius+273.15;
	return kelvin;
}
int main ()
{
	try {
	std::cout << "Input temperature in celsius\n";
	double celsius_input;
	cin >> celsius_input;
	double kelvin = celsius_to_kelvin(celsius_input);
	
	std::cout << celsius_input << "celsisu = " << kelvin<<"kelvin\n";
	return 0;
	}
	catch(bad_input& e){
		cerr << e.what();	
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
}
