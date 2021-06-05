//Simple stack implementation
/*
#include<iostream>
using namespace std;

class Stack{
	int *stk;
	int top;
	int size;
public:
	Stack(int sz){
		size=sz;
		top=-1;
		stk=new int [size];
	}
	void push(int x);
	int pop();
};

void Stack :: push(int x){

	if(top==size-1){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		top++;
		stk[top]=x; 
	}
}

int Stack :: pop(){
	int x=0;
	if(top==-1){
		cout<<"Stack UnderFlow"<<endl;
	}
	else{
		x= stk [top];
		top--;
	}
	return x;
}

int main(){
	Stack s(2);
	s.push(4);
	s.push(5);
	//s.push(9);
}
*/

// now Template Literals => i.e class and function

#include<iostream>
using namespace std;

template <class T>    // iska scope only upto line 69 i.e. inside a class or func only
class Stack{
	T *stk;
	int top;
	int size;
public:
	Stack(int sz){
		size=sz;
		top=-1;
		stk=new T[size];
	}
	void push(T x);
	T pop();
};

template <class T>
void Stack <T> :: push(T x){        // class vale T ko acces krne k liye hai yeh <T> .. we have to declare it in every func.  

	if(top==size-1){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		top++;
		stk[top]=x; 
	}
}

template<class T>
T Stack <T> :: pop(){
	T x=0;
	if(top==-1){
		cout<<"Stack UnderFlow"<<endl;
	}
	else{
		x= stk [top];
		top--;
	}
	return x;
}

int main(){
	Stack<double> s(2);  // assigning value to all t 
	s.push(4);
	s.push(5);
	s.push(9);
}