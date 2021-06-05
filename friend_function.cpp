#include<iostream>
using namespace std;

class your;       // define it as class .. whom we are making friend
class my{
private:
	int a=10;
protected:
	int b=20;
public:
	int c=30;
	
	friend your;    // write keyword friend than class name whom we are making friend
};

class your{
public:
	my m;    // An object normally access only public variables
	int fun(){
		cout<<m.a<<" "<<m.b<<" "<<m.c;
	}
};

int main(){
	your y;
	y.fun();
}