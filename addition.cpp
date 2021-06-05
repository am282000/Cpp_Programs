#include<iostream>
using namespace std;
class add
{
	private:
	int a,b,c;
	public:
	
	int getdata()
	{
		cout<<"enter 2 no";
		cin>>a>>b;
	}
	int adddata();
};
	int add :: adddata()
	{
		c=a+b;
		cout<<"sum of 2 no is ="<<c;
	}


int main()
{
	add a;
	a.getdata();
	a.adddata();
 }	 
