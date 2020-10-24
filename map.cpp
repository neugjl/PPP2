#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <bitset>
using namespace std;
inline void keep_window_open(){char ch; cin>>ch;}

int main ()
{
	unsigned int uitemp{0};
	uitemp = -3;
	cout << bitset<8*sizeof(int)>{uitemp} <<'\n';
	cout << bitset<8*sizeof(int)>{~uitemp} <<'\n';
	cin>>uitemp;
	cout << bitset<8*sizeof(int)>{uitemp} <<'\n';
	cout << bitset<8*sizeof(int)>{~uitemp} <<'\n';
	map<string,int> words;
	for(string s;cin>>s;)
		++words[s];
	for(const auto&p:words)
		cout<<p.first<<":"<<p.second<<'\n';
	return 0;
}
