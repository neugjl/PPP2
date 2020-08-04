#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
struct Reading{
int hour;
double temperature;
};

int main ()
{
	std::cout << "Please input the input file name\n";
	string input_name;
	cin >> input_name;
	ifstream ist{input_name};
	if(!ist) cout <<"failed to open input file!\n";

	std::cout << "Please input the output file name\n";
	string output_name;
	cin >> output_name;
	ofstream ost{output_name};
	if(!ost.good()) cout <<"failed to open output file!\n";
	vector<Reading> temp_list;
	int hour;
	double temp;

	while(ist>>hour>>temp)
		temp_list.push_back(Reading{hour,temp});
	for(auto& i:temp_list)
		ost<<'('<<i.hour<<","<<i.temperature<<")\n";
	return 0;
}
