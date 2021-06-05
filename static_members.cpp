
// Ek hi baaar create hounga memory m ..... and can be accesssed by objects,class anytime
// classname :: staticmembername ;   ---- we can access it like this
// keeps the value and apply operations on the last saved value
// at last need to initialise it globally  .....  returnType Classname :: staticmembername = initial value  e.g int Test :: count=0;

#include<iostream>
using namespace std;



class Test{
	int a;    // this can be created in memory again for new object declaration
	int b;
public:
	static int count;  // static data member     // this is created only one tym in memory
	Test(){
		a=10;
		b=20;
		count++;
	}
	static int getCount(){   // static member function
		return count;    // static func m only static variable ko hi call kr skte hai
	}
};

int Test :: count=0;
int main(){
	Test t1;
	Test t2;
	cout<<t1.count<<endl;
	cout<<t2.count<<endl;  // no matter what we are calling .. becoz it is shared by all objects .. so all wil return its latest/updated value
	cout<<Test::count<<endl;   // we can  access variable , constructor like this also.
	cout<<Test::getCount()<<endl;
	Test t3;
	cout<<t3.getCount()<<endl;
	cout<<t3.count<<endl;
	t1.count=25;
	cout<<t3.count;
}