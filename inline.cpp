#include<iostream>
using namespace std;
class add
{
	int a,b;
	public:
	int addition(int x,int y);
};

inline int add :: addition(int x,int y)
{
	return(x+y);
}

int main()
{
add a;
cout<<a.addition(5,4); // this is called direct call of func through obj

//or

int c =a.addition(6,12);
cout<<endl<<"sum is ="<<c;

//variable m store karake print karana
}
