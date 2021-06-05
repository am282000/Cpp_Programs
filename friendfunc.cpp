// friend function

#include<iostream>
using namespace std;

class xyz;  //forward declaration
class abc
{
	int a;
	public:
		int getdata(int i)   // or cout<<enter i; cin>>i; a=i;
		{	  
		a=i;
		}
		
	friend int max(abc,xyz);   //asa aarguement class pass karate h yha
};

class xyz
{
	int x;
	public:
		int getdata(int j)  
		{
			x=j;
		}
		
	friend int max(abc,xyz);
};


int max(abc a1,xyz x1)

{
	if(a1.a>x1.x)   // phle object hi likhna h nhi to error aayega
	cout<<"a is greater";
	else
	cout<<"x is greater";
}

int main()
{
	abc a1;
	a1.getdata(5);
	xyz x1;
	x1.getdata(6);
	max(a1,x1);
}
