#include<iostream>
using namespace std;

void display(){
	cout<<"Hello";
}
int main(){
	void (*fp)();   //declaration of func ptr    return type void ais as same as of func display
	fp=display;		//initialization
	(*fp)();		//call  
}
