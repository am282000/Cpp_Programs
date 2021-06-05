// call by value

#include<iostream>
using namespace std;
int fun1(int y);
int main ()
{
int x=10;
fun1(x);
cout<<"value of x after call by value ="<<x<<endl;
}

int fun1(int y)
{
	y=y+10;
cout<<"value of y ="<<y<<endl;
}


