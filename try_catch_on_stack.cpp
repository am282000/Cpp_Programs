#include<iostream>
using namespace std;

class StackOverFlow : exception{
};
class StackUnderFlow : exception{
};

class Stack{
	int *stk;
	int size;
	int top = -1;
public:
	Stack(int sz){
		size=sz;
		stk= new int [size];   // heap m jo user size ki array bn jayegi
	}
	void push(int x){
		try{
			if(top==size-1) 
				throw StackOverFlow();
			top++;
			stk[top]=x;
		}
		catch(StackOverFlow e){
			cout<<"Stack is OverFlowing"<<endl;
		}
	}
	
	int pop(){
		try{
			if(top==-1)
				throw StackUnderFlow();
			return stk [top--];
		}
		catch(StackUnderFlow e){
			cout<<"Stack is UnderFlowing"<<endl;
		}
	}
};

int main(){
	// Overflow error

	Stack s(2);
	
	s.push(7);
	s.push(2);
	s.push(8);

	// underflow
	/*
	Stack s(0);
	s.pop();
	//or
	
	Stack s(2);
	
	s.push(7);
	s.push(2);
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	*/
}