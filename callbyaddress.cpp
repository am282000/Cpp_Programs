//call by address
#include<iostream>
using namespace std;
void func(int *y);
int main()
{
	int x=10;
	func(&x);
	cout<<"value of x after calling ="<<x;

}

void func(int *y)
{
	*y=*y+10;
	cout<<"value of y ="<<*y<<endl;
// sirf y likheinge to address show karega
}
