#include<iostream>
using namespace std;

int division(int x,int y){
	if(y==0)
		throw 404;
	return x/y;
}

int main(){
	int a=10,b=0,c;
	try{				// if true do this
		c=division(a,b);
		cout<<c<<endl;
	}
	catch(int e){       // catch the exception thrown by try block and simply execute this.
		cout<<"Division by 0 is not possible. "<<"Error code : "<<e<<endl;
	}
	cout<<"Byee";
}