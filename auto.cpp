//auto => auto automatically detect the datatype.

#include<iostream>
using namespace std;

float fun(){
	return 12.5f;
}

int main(){
	double x = 2*6.2+'a';  // a ASCII value is 97
	cout<<x<<endl;
	
	auto y = "Hello Baby";
	cout<<y<<endl;
	
	auto z=fun();
	cout<<z<<endl;
	
	decltype(x) a =2*2.6;    //decltype (x)  y  => this means now y have the same datatype as of x 
	cout<<a;
}