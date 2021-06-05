// nesting of member function

#include<iostream>
using namespace std;
class great
{
	int a,b;
	public:
		void getdata();
		int largest();
		int display();
};

void great :: getdata()
{
	cout<<"enter 2 no"<<endl;
	cin>>a>>b;
}

int great :: largest() // int type ka hi lena padega yha 
{
	if(a>b)
	return(a);
	else
	return(b);
}

int great :: display()  // coz display karana h so int
{
	cout<<largest();
}

int main()
{
	great g;
	g.getdata();
	g.largest();
	g.display();
	
}
