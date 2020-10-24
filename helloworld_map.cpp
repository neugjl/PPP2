#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
inline void keep_window_open(){char ch; cin>>ch;}
map<int,string> validmap(map<int,string>& allmap, map<int,string>& supportmap)
{
	map<int,string> returnmap;
	for(auto& it:supportmap){
		if(allmap.find(it.first) != allmap.end()){
			returnmap[it.first] = it.second;
		}
	}
	return returnmap;
}

int main ()
{
	std::cout << "Hello world!\n";
	map<int,string> all_labels {
		{1,"PeoPle"},
		{2,"Baby"},
		{3,"Food"},
		{4,"Animal"}
	};
	map<int,string> support_labels {
		{1,"PeoPle"},
		{3,"Food"}
	};
	map<int,string> empty_labels {
	};
	cout<< empty_labels.empty()<< "\n";
//	cout<< empty_labels.rbegin()->first << "\n"; //before use rbegin(), we have to ensure the map is not empty. begin() doesn't require that
	for(auto& it:empty_labels){
		cout << it.first<<it.second<<"\n";	
	}
	auto _validmap = validmap(all_labels,support_labels);
	for(auto& it :_validmap){
		cout << it.first<<it.second<<"\n";	
	}
	return 0;
}
