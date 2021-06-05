
/*
#include<iostream>
using namespace std;

class MyException{
};

int main(){
	int x=10,y=0,z;
	
	try{
	if(y==0)
		throw MyException();  // constructor   // we can throw anything int,float ,char,double,string, class
	z=x/y;
	cout<<z<<endl;
	}

	catch(MyException e){
		cout<<"Division by zero "<<endl;
	}

}

*/

//Note: in case of string write like this =>  throw string("Division by 0");      catch(string e){cout<<"Error";}


#include<iostream>
using namespace std;

class MyException: public exception{  // exception is an inbuild class .. it is better to use this in build class rather than creating
};

int division(int a,int b) throw(MyException){  // it is optional ... to write throw(datatype)  e.g throw(int)
	if(b==0)
		throw MyException();  // constructor
	return a/b;
}

int main(){
	int x=10,y=0,z;
	
	try{
	z=division(x,y);
	cout<<z<<endl;
	}

	catch(MyException e){
		cout<<"Division by zero "<<endl;
	}

}

/*
#include<iostream>
using namespace std;

class MyException : public exception{    	
};

int division(int x,int y) throw (MyException){   // it is optional to write throw keyword here and defining its type. 
												// if there is !class write its datatype simple e.g (int)
					// note: throw()  -> if we write this in line 63 it means it is not throwing any exception
	if(y==0)
		throw myException;   
	return x/y;
}

*/
