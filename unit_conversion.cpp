#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

constexpr double meter_to_centimeter = 100;
constexpr double inch_to_centimeter = 2.54;
constexpr double feet_to_inch = 12;

bool validate(string& unit,vector<string>& vector_units)
{
	for(auto& u:vector_units)
		if(unit==u)
			return 1;
	return 0;
}
double convert_to_centimeter(double value,string unit)
{
	if(unit == "m")	
		return value*meter_to_centimeter;
	else if (unit == "in")
		return value*inch_to_centimeter;
	else if (unit == "ft")
		return value*inch_to_centimeter*feet_to_inch;
	else if (unit == "cm")
		return value;
	else { 
		cout << "Error! invalid unit";
		return 0;
	}
}

void report_statistic(vector<double>& input_list)	
{

	sort(input_list.begin(),input_list.end());
	for(auto& i:input_list)
		cout << i <<" centimeter\n";
}
int main ()
{
	vector<string> units = {"m","in","ft","cm"};
	double value1{0};
	double value1_in_centimeter{0};
	vector<double> input_list;
	string unit;
	double smaller;
	double larger;
	static int init = 1;
	while(cin >> value1 >> unit)
	{
		cout << value1 << unit;
		cout << "\n";

		if(validate(unit,units)) {
			cout << "It is valid\n";
			value1_in_centimeter = convert_to_centimeter(value1,unit);
			input_list.push_back(value1_in_centimeter);
			if(init == 1){
				smaller = value1_in_centimeter;
				larger = value1_in_centimeter;
				init++;
			}
			if(value1_in_centimeter < smaller)
				smaller = value1_in_centimeter;
			if(value1_in_centimeter > larger)
				 larger = value1_in_centimeter;

		}
		else
			cout << "It is invalid\n";

	}
	report_statistic(input_list);	
	cout << "The larger value so far is :" << larger;
	cout << "The smaller value so far is :" << smaller;
	cout << "\n";
	return 0;
}
