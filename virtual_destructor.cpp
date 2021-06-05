/*
First constructor of Base than Derived is called.
First destructor of Derived than Base is called.
*/

/*
#include<iostream>
using namespace std;

class Base{
public:
	Base(){cout<<"Constructor of Base"<<endl;}
	~Base(){
		cout<<"Destructor of Base"<<endl;
	}
};

class Derived : Base{
public:
	Derived(){cout<<"Constructor of Derived"<<endl;}
	~Derived(){
		cout<<"Destructor of Derived"<<endl;
	}
};

void fun(){
	Derived d;
}

int main(){
	fun();
}
*/


#include<iostream>
using namespace std;

class Base{
public:

		virtual ~Base(){	 // vitual to access the destructor of derived class first than base one.
		cout<<"Destructor of Base"<<endl;
	}
};

class Derived : public Base{    // inherit publically else it is inherited privately
public:

	~Derived(){
		cout<<"Destructor of Derived"<<endl;
	}
};

void fun(){
	Base *ptr = new Derived();    // base ka pointer or derived ka object
	delete ptr;				// this will give destructor of base
}

int main(){
	fun();
}