#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unistd.h>
using namespace std;
inline void keep_window_open(){char ch; cin>>ch;}
void forkthem(int n){
	if(n > 0){
		fork();	
		cout << getpid() << '\n';
		forkthem(n-1);
	}

}
int main ()
{
	std::cout<< getpid() << "Hello world!\n";
	forkthem(3);
	std::cout<< getpid() << "Here we go!\n";
	//keep_window_open();
	return 0;
}
