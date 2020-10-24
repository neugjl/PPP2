#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
inline void keep_window_open(){char ch; cin>>ch;}
struct link {
string value;
link* pre;
link* succ;
link(const string& v,link* p = nullptr, link* s = nullptr):value{v},pre{p},succ{s} {}
};
void print_all (link* l)
{
	cout << "{";
	while(l){
		cout << l->value ;
		if(l->succ){
			l= l->succ;
		}else{
			break;	
		}
		cout << " , ";
	}
	cout << "}\n";
}
//insert n before p
link* insert(link* p,link* n)
{
	if(n == nullptr) return p; //return nullptr; if i insert a nullptr, it will break the link
	if(p == nullptr) return n;
	n->succ = p;
	if(p-> pre){ 
		n->pre = p->pre;
	} else {
		p->pre = n;
		return n;
	}
	p->pre->succ = n;
	p->pre = n;
	return n;
}
int main ()
{
	std::cout << "Hello world!\n";
	//link *nodes_god = new link("Thor",nullptr,nullptr);
	link *nodes_god = insert(nullptr, new link("Thor"));
//	nodes_god = new link("Odin",nullptr,nodes_god);
//	nodes_god->succ->pre = nodes_god;
//	nodes_god = new link("Fria",nullptr,nodes_god);
//	nodes_god->succ->pre = nodes_god;
	nodes_god = insert(nodes_god,new link("Odin"));
	nodes_god = insert(nodes_god,new link("Fria"));
	print_all(nodes_god);	
	return 0;
}
