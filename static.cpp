#include<iostream>
using namespace std;


class  sample
{
	static int count;
	public: 
	int show(); //declation
	int showcount();
};

int sample :: count; // or we can put count = 10;

int sample::show()
{
	cout<<"hello"<<endl;
	count++;
}

int sample :: showcount()
{
	cout<<"count is="<<count;
}


int main()
{
	sample a,b,c;
	a.show();
	b.show();
	c.show();
	a.showcount();
}
