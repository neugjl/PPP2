#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main ()
{
	double value1{0};
	double smaller;
	double larger;
	cin >> value1;
	smaller = value1;
	larger = value1;
	while(cin >> value1)
	{
		cout << "Input: "<< value1;
		if(value1<smaller){
			smaller = value1;
		}
		else if(value1>larger) {
			larger =value1;
		}
		else {
			cout << "The two value is equal";
			cout << "\n";
			continue;
		}

		cout << "The larger value so far is :" << larger;
		cout << "\n";
		cout << "The smaller value so far is :" << smaller;
		cout << "\n";
	}
	return 0;
}
