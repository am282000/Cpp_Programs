//call by reference

#include<iostream>
using namespace std;
int func(int &y);
int main()
{
	int x=10;
	func(x);
	cout<<"value of x after calling ="<<x;
}

int func(int &y)
{
	y=y+10;
	cout<<"y is ="<<y;
}
