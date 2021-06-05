/*
Types of error
	1. Syntax error => happen when a wrong syntax is passed or something is not declared but used => With the help of Compiler we can fix it.
	2. Logical Error => happen when a wrong logic is passed => With the help of Debugger we can fix it.
	3. Runtime error => happen when user pass wrong input 
						when there is problem with resources
						
						
		These are called as exception that my program will work except in these conditions.
*/

#include<iostream>
using namespace std;

int main(){
	int a=10,b=0,c;
	try{				// if true do this
		if(b==0)
			throw 101;	// if b=0 , than throw an exception , it will be anything 1,2,34,.. so that catch will catch that exception
		c=a/b;			//simple code execute this if b!=0
		cout<<c;
	}
	catch(int e){       // catch the exception thrown by try block and simply execute this.
		cout<<"Division by 0 is not possible. "<<"Error code : "<<e<<endl;
	}
	cout<<"Byee";
} 