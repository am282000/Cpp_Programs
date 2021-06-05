/*
Normally if we deal withh heap memory ... normsl programmer sometimes forget to delete the pointer ...
which will create a new object in heap for every pointer .. while the old one still reamins ther
A stage will come when ther is no space for new heap pointer . This will cause Crash of program and is called as Memory leak
*/

/*
 Smart pointer => 3 types
	1. unique_pointer  Only 1 pointer can pointer to it .
	2. weak pointer		Multiple pointer at a tym can point to it .. No data for no of pointer connected. i.e. use_count()
	3. shared pointer   Multiple pointer at a tym can point to it .. It also keeps the no of pointer connected. i.e. use_count()
*/


//#1  Unique pointer 

/*
#include<iostream>
#include<memory>
using namespace std;

class Rectangle{
	int length;
	int breadth;
public:
	Rectangle(int l,int b){
		length=l;
		breadth=b;
	}
	int area(){
		return length*breadth;
	}
};

int main(){
	unique_ptr<Rectangle> ptr(new Rectangle(10,5));   //u_p <ClassName> ptrobj (new constuctor(values))
	cout<<ptr->area()<<endl; 
	
//	unique_ptr<Rectangle> ptr2=ptr;  // we can't do this in unique_ptr
//	unique_ptr<Rectangle> ptr2(ptr);	// we can't do this in unique_ptr
	
	unique_ptr<Rectangle> ptr2;
	ptr2=move(ptr);
	cout<<ptr2->area()<<endl;
	cout<<ptr->area()<<endl;   // it will run but dont display any value ..becoz now value of ptr is moved to ptr2 ... ptr is null 
}
*/



//#2  Shared pointer 

/*
#include<iostream>
#include<memory>
using namespace std;

class Rectangle{
	int length;
	int breadth;
public:
	Rectangle(int l,int b){
		length=l;
		breadth=b;
	}
	int area(){
		return length*breadth;
	}
};

int main(){
	shared_ptr<Rectangle> ptr(new Rectangle(10,5));   //u_p <ClassName> ptrobj (new constuctor(values))
	cout<<ptr->area()<<endl; 
	
	shared_ptr<Rectangle> ptr2;
	ptr2=ptr;
	cout<<ptr2->area()<<endl;
	cout<<ptr->area()<<endl;   // now value is shared by multiple pointers
	cout<<ptr.use_count();    // this will show how many pointer have the access of this value
}
*/




//#3  Weak pointer - Doubt !!

#include<iostream>
#include<memory>
using namespace std;

class Rectangle{
	int length;
	int breadth;
public:
	Rectangle(int l,int b){
		length=l;
		breadth=b;
	}
	int area(){
		return length*breadth;
	}
};

int main(){
	weak_ptr<Rectangle> ptr;   //u_p <ClassName> ptrobj (new constuctor(values))
	//ptr =new Rectangle(10,5);
	auto sp = make_shared<int>(10,5);
	ptr = sp;
	cout<<ptr->area()<<endl; 
	
	weak_ptr<Rectangle> ptr2;
	ptr2=ptr;
	cout<<ptr2->area()<<endl;
	cout<<ptr->area()<<endl;   // now value is shared by multiple pointers
	//cout<<ptr.use_count();    // this will show how many pointer have the access of this value
}


//Note: In java smart pointer is not there .. there is garbage collection .