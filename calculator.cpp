#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class bad_input{
	public:
		bad_input(string s):message{s}{cout<<"bad_input constructor\n";}
		~bad_input(){cout<<"~bad_input destructor\n";}
		string what(){return message;}
	private:
		string message;
};
class Token {
public:
	char type;
	int value;
	Token(char t,int v = 0):type{t},value{v} {cout<<"Construct token" << type <<value<<'\n';}
	Token():type{'0'},value{0} {}
};
class Token_stream{
	public:
		Token get();
		void putback(Token t);
	private:
		Token buff;
		bool full{false};

};
void Token_stream::putback(Token t)
{
	if(full)
		throw bad_input(__func__);
	buff = t;
	full = true;

}
Token Token_stream::get()
{
	if(full) {
		full = false;
		return buff;
	}
	char temp;
	cin >> temp;
	switch(temp){
	case(';'): case('q'): case('+'): case('-'): case('*'): case('/'):case('('): case(')'):
		return Token{temp};
	case('.'): case('0'): case('1'): case('2'): case('3'): case('4'): case('5'): case('6'): case('7'): case('8'): case('9'):
		{
			cin.putback(temp);
			int value;
			cin >> value;
		return Token{'8',value};
		}
	default:
		throw bad_input(__func__);
		break;
	}
}
Token_stream ts;
int expression();
int primary()
{
	Token temp = ts.get();
	switch(temp.type)
	{
		case('('):{
			auto value = expression();
			if (ts.get().type != ')')
				throw bad_input(__func__);
			return value;
				  }
		case('8'):
			return temp.value;
		default:
			cout <<"type:"<< temp.type <<"value:"<< temp.value<<'\n';
			throw bad_input(__func__);
	}
		
}
int term()
{
	auto lval = primary();
	Token temp = ts.get();
	while(true){
		switch(temp.type)
		{
			case('*'):
				 lval*=primary();
				 temp = ts.get();
				 break;
			case('/'):
				 lval/=primary();
				 temp = ts.get();
				 break;
			default:
				ts.putback(temp);
				return lval;
		}
}
		
}
int expression()
{
	auto lval = term();
	Token temp = ts.get();
	while(true){
		switch(temp.type)
		{
			case('+'):
				 lval += term();
				 temp = ts.get();
				 break;
			case('-'):
				 lval -= term();
				 temp = ts.get();
				 break;
			default:
				ts.putback(temp);
				return lval;
		}
	}
		
}
int main ()
{
	try {
		int val = 0;
		while(cin) {
			Token t = ts.get();
			if(t.type == 'q')break;
			if(t.type == ';'){
				cout << "=" << val<<'\n';
				continue;
			}
			else
				ts.putback(t);
			val = expression();
			cout<<"loop over!\n";
		}
	}
	catch(bad_input& e){
		cerr << e.what();	
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;
	}
}
