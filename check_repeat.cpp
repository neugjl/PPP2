#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open(){char ch; cin>>ch;}

int main ()
{
	int number_of_words{0};
	//because cin ignore space, so we use " " as default value
	string previous{" "}; 
	string current;
	while(cin >> current) {
		++number_of_words;
		if(current == previous){
			cout << "Repeated word: " << current ;
			cout << " Position: " << number_of_words <<"\n";
		}
		previous = current;
	}
	cout << "Exit!\n";
	//keep_window_open();
	return 0;
}
