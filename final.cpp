/*
Final keyword is always used at last of the signature of a func.
By final keyword:
	we are not able to use inheritance 
	we are not able to use function overriding;
*/



#include<iostream>
using namespace std;

class Base final{  // we can't inherit a final class 
	
};

class Derived : Base{

};

int main(){

}





/*
#include<iostream>
using namespace std;

class Base{
public:
	virtual void show() final{     // overriding of a final func is not possible
		cout<<"Hohoohooooo "<<endl;
	}	
};

class Derived : Base{
public:
	void show(){
		cout<<"Hahahahahhahaaaa"<<endl;
	}
};

int main(){
	Base b;
	b.show();
}
*/

