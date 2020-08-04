#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include "square_def.h" 
using namespace std;

int main ()
{
	for(int i = 0; i<10; i++)
	{
		cout << "The square of " << i <<" \t " << manual_square(i) <<"\n";
	}
	return 0;
}
