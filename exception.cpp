#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class Bad_area{
	public:
		Bad_area(string s):message{s}{cout<<"Bad_area constructor\n";}
		~Bad_area(){cout<<"~Bad_area destructor\n";}
		string what(){return message;}
	private:
		string message;
};
int area(int length, int width)
{
	if(length < 0 || width < 0) throw Bad_area{__func__};
	return length * width;
}
int frame_area(int length, int width)
{
	return area(length-2,width-2);
}
int main ()
try{
	vector<int> test;
	int length;
	int width;
	int size;

	//length = test[0]; //segment fault (core dump)
	//length = test.at(0); //throw range exception
	cout << "Please input the length  width\n";
	cin >> length >> width;
	size = area(length,width);	
	cout <<" the result is:" << size;
	cout <<"\n";
	size = frame_area(length,width);	
	cout <<" frame result is:" << size;
	cout <<"\n";
	return 0;	
}
catch(Bad_area& e){
	cerr<<"I am in Bad area with message: " <<e.what();
	cout <<"\n";
	return -3;

}
catch(exception& e) {
	cerr << "Error:" << e.what() <<'\n';
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}
