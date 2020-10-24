#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;
inline void keep_window_open(){char ch; cin>>ch;}
int main ()
{
	int wtstatus;
	std::cout<< getpid() << "Hello world!\n";
	std::cout<< getpid() << "Here we go!\n";
	int val = 5;
	int pid;
	if((pid = fork()))
		waitpid(pid,&wtstatus,WNOHANG);
	val++;
	cout << getpid() << ':' << val << '\n';
	//keep_window_open();
	return 0;
}
