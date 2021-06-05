#include<iostream>
using namespace std;
int main(){
	 int a=10;
	 int *p=&a;   //declaration  doubleand other datatypes will store a diff address
	 cout<<a<<endl;
	 cout<<&a<<endl;  //initialisation
	 cout<<p<<endl;
	 cout<<&p<<endl;
	 cout<<*p<<endl;  //derefrencing - shows data in a .
}
