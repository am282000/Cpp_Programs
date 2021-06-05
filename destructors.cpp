/*
Destructor always called once at the end of the program
Destructor means destruct or deallocate the memory. 
In case of heap we must deallocate the memory ny self.
Destructor is also having the same name As of class with tilde ~ symbol.
*/

/*
#include<iostream>
using namespace std;

class Demo{
public:
	Demo(){
		cout<<"Mai Hoon Chuhaaa"<<endl;
	}
	~Demo(){
		cout<<"Mai Hoon Chuhaaa Ka Bachaaa"<<endl;
	}
};

void fun(){
	Demo d;
}

int main(){
	fun();
}
*/


/*
#include<iostream>
using namespace std;

class Demo{
	int *p;
public:
	Demo(){
		cout<<"Mai hoon Chuhaaaa"<<endl;
	}
	~Demo(){
		cout<<"Mai Hoon Chuhaaa Ka Bachaaa"<<endl;
	}
};

void fun(){
	Demo *p = new Demo();   // heap m memory bn gyi ... constructor called
	delete p;    // Descructor ko khud se call krna padega in case of heap memory allocation
}

int main(){
	fun();
}
*/

#include<iostream>
using namespace std;

class Demo{
	int *p;
public:
	Demo(){
		p = new int [10];
		cout<<"Mai hoon Chuhaaaa"<<endl;
	}
	~Demo(){
		delete []p;   // to delete that heap vali array  // if we don't delete it it may cause memory leak.. also crash of program sometimes
		cout<<"Mai Hoon Chuhaaa Ka Bachaaa"<<endl;
	}
};

void fun(){
	Demo *p = new Demo();   // heap m memory bn gyi ... constructor called
	delete p;    // Descructor ko khud se call krna padega in case of heap memory allocation
}

int main(){
	fun();
}