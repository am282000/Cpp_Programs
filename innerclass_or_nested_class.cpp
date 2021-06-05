#include<iostream>
using namespace std;

class Outer{
public:
	int a=10;
	static int b;
	
	int fun1(){   
		i.show();   // why? doing this ... so that outer class can access inner class => to remove complexity
		cout<<i.x<<endl;   // we are trying access inner class function and daqta member
	}
	
	class inner{
	public:
		int x=20;  // i can use it either in outer class or in main 
		void show(){
			//cout<<a;  // inner class outer k only static datamember ko hi access kr skti hai
			cout<<b<<endl;  // becoz b is static
			cout<<"We can access only static data members here. or simply display msg like this"<<endl;
			//cout<<x; //and we can access this also
		}
	};
	inner i;
};
int Outer :: b=30; 

int main(){
	Outer o;   // outer ka object ...outer k hi func ko call krega ... is function m hi inner ko call krlo
	o.fun1();
	Outer::inner z;  // this is also inner class ka object .. by this we can call inner functions as we doing in outer class in line 10,11
	z.show();
	cout<<z.x;
	
}