#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unistd.h>
#include <sys/wait.h>
#include <thread>
using namespace std;
static constexpr int NTHREADS{10000}; //the number has to big enough to trigger race condition
inline void keep_window_open(){char ch; cin>>ch;}
static int go(int n,int * value)
{
	cout<<"Hello world from " << n <<'\n';
	cout << "the address of value :" << value <<'\n';
	*value = n+*value;	
	return 100+n;
}
class T {
	public:
		T(){cout << "Construct T\n";}
		~T(){cout << "Deconstruct T\n";}
		void setvalue(int value){mvalue=value;}
		int getvalue(void){return mvalue;}
	private:
		int mvalue;
};
int main ()
{
	int value{100};
	auto heap_value = unique_ptr<int>{new int{0}};
	{
	auto unique_T = unique_ptr<T>{new T{}};
	}
	vector<thread *> vector_thread;
	for(int i = NTHREADS-1; i >= 0	; i--)
		vector_thread.push_back(new thread(go,i,heap_value.get())); //why I use the reference of value as argument, report error
	for(int i = 0; i < NTHREADS	; i++)
		vector_thread[i]->join();
	//keep_window_open();
	cout << "Main thread done!\n";
	cout << "value =" << *heap_value<<'\n';
	return 1;
}
