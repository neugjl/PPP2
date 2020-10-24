#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <Fl/Fl_Window.H>
#include <sstream>
#include <iostream>
using namespace std;
int main()
{
	std::istringstream os{"arm,corte-a53ia54"};
	int version;
	
	//os >> version;
	//std::cin >> version;
	for(char ch; os >> ch;){
		//cout << ch;
		if(isdigit(ch))	{
			os.unget();	
			
			os >> version;
			break;
		}
	}
	std::cout <<"versin:"<< version;
	
	Fl_Window window(200, 200, "Window title");
	Fl_Box box(0,0,200,200,"Hey gjl, I mean, Hello, World!");
	window.show();

	return Fl::run();
}
