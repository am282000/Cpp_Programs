
/*
#define x 10  // pre prosser directive  => performed before the compilation starts // globally usd

int main(){
	const int x=10;  //constant modifiers cannot be modified => consume memory at time of compilation  // inside a class or function
	x++;
	cout<<x; // x is 10 always
}

///const integer
int main(){
	int x=10;
	const int *ptr =&x; // also write it as 	int const *ptr =&x;           // data is constant
	++*ptr;
	cout<<x;   // x is 10 always 
}

//const pointer to integer 
int main(){
	int x=10;
	int *const ptr =&x; // now the pointer is constant // read from right to left
	int y=20;
	ptr= &y;   // now we can t assign value to y .becoz pointer is const
	++*ptr;
	
}

//const pointer to integer const
int main(){
	int x=10;
	const int *const ptr =&x; // now the pointer and data both are constant // read from right to left
	int y=20;
	ptr= &y;   // now we can t assign ptr value to y .becoz pointer is const
	++*ptr;    // we cannot even modify the data 
	
}


// const in func 

let a program is constructed

public:
	int x=10;
void Display() const{  // now we can only read the vzlue of x ..can't modify
	x++;  // this is reading and updating the value  => to avoid this use const at the end of signature of func
}


// parameters of a func as const

void fun(const int &x, int &y){   // no updation of the value of x
	x++;  // now this is not possible ton update the value of x .. 
}
*/

// Now understand it better by program


//1 st constant identifiers
/*
#include<iostream >
using namespace std;

int main(){
	//const int x=10; // identifier x of type integer constant
	int const x=10;  // identifier x of type constant integer //also write it as // read only - no modifyy
	x++;  // can't modify the value of x now 
	//cout<<x;
}
*/
//Note : integer constant or constant integer is the same thing

//2nd ptr type of integer constant
/*
#include<iostream>
using namespace std;

int main(){
	int x=10;  // we can also write it as const type too
	const int *ptr = &x;  //ptr of type integer constant
	++*ptr;
	cout<<*ptr<<" "<<x;
*/
//3rd pointer can address on any other data member 
/*
#include<iostream>
using namespace std;

int main(){
	int x=10;
	const int *ptr = &x;
	int y=20;
	ptr = &y; // pointer can address on any other variable 
	++*ptr;    // but we can't modify it
	cout<<*ptr <<" "<< x;
}
*/

//4th pointer is constant of type integer pointer
/*
#include<iostream>
using namespace std;

int main(){
	int x=10;
	int *const ptr = &x;   //pointer is constant of type integer pointer
	++*ptr;    // yes we can modify the value 
	int y=20;
	ptr = &y; // now it can't moved from 1 variable to another
	cout<<*ptr <<" "<< x;
}
*/
//5th pointer is constant and integer is also const 
/*
#include<iostream>
using namespace std;

int main(){
	int x=10;
	const int *const ptr = &x;   //pointer constant to a integer constant 
	++*ptr;    // we can't do this now
	int y=20;
	ptr = &y; // we can't do this now
	cout<<*ptr <<" "<< x;
}
*/

//6th constant function
/*
#include<iostream>
using namespace std;

class Demo{
public:
	int x=10;
	int y=20;
	
	void Dispaly() const {   // whn a func is const we can't modify its members
		x++;
		cout<<x<<" "<<y<<endl;
	}	
};

int main(){
	Demo d;
	d.Dispaly();
}
*/

//7th constant parameter referance

#include<iostream>
using namespace std;

void fun(const int &a,int &b){  // now we can't modify the value of a 
	cout<<a<<" "<<b<<endl;
	a++; // we are trying to change origunal value ..coz its call by refernce
}

int main(){
	int x=10;
	int y=20;
	
	fun(x,y);
	cout<<"Main m se hu m :"<<x<<" "<<y<<endl;
}
