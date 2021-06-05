#include<iostream>
using namespace std;


class  sample
{
	static int count;
	public: 
	int show();
	static int showcount();
};

int sample :: count; // or we can put count = 10; 
// static vale ko ese spcl define krna padta h

int sample::show()
{
	cout<<"hello"<<endl;
	count++;
}

int sample :: showcount()
{
	cout<<"count is="<<count<<endl;    //agr count static na hota to error aata
}


int main()
{
	sample a,b,c;
	a.show();
	b.show();
	c.show();
	sample::showcount(); // ese b call kr skte h
	a.showcount();
}
