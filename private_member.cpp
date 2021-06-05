#include<iostream>
using namespace std;
class sample
{
	private:
		void read();
	public:
		void display();
};

void sample :: read()
{
	cout<<"i am in private"<<endl;
}

void sample::display()
{
	cout<<"i am in public"<<endl;
	read();
}

int main()
{
sample s;
s.display();
// s.read(); if we do try to do this error comes read is private
}
