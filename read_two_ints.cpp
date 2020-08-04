#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main ()
{
	double value1{0};
	double value2{0};
	while(cin >> value1 >> value2)
	{
		double smaller;
		double larger;
		if(value1<value2){
			smaller = value1;
			larger =value2;
			cout<<"value1 < value2";
			cout << "\n";
		}
		else if(value1>value2) {
			smaller = value2;
			larger =value1;
			cout<<"value1 > value2";
			cout << "\n";
		}
		else {
			cout << "The two value is equal";
			cout << "\n";
			continue;
		}

		cout << "The larger value is :" << larger;
		cout << "\n";
		cout << "The smaller value is :" << smaller;
		cout << "\n";
		
		if(abs(value1-value2)< 1.0/100) {
			cout<<"the numbers are almost equal";
			cout << "\n";
		}
	}
	return 0;
}
