/*
// We can have multiple catch block of each type of data

try{
	-------202
	-------1.5f
	------- MyException 
}

catch(int e){
	-----
}
catch(float e){
	------
}
catch(MyException e){
	---------
}
catch(...){  // catch all => this must be declared at last .. so that first all other blocks is checked
	---- we generally not use this .. becoz by this we don't get any exact error message
}


// we can have nesting of try catch block

try{

	try{

	}
	catch{	
	
	}
}
catch{
}

// how to use catch block in case of inheritance

class MyException1{
};
class MyException2: public MyException1{
};

try{

}
catch(MyException2 e){   // first declare exception of child class
	
}
catch(MyException1 e){   // than exception of parent class
	
}

*/


#include<iostream>
using namespace std;

class MyException1 : exception{
};
class MyException2 : public MyException1{
};

int main(){
	try{
		//throw 1;
		//throw 'a';  
		//throw string("hi");
		throw MyException2();
	}
	catch(int e){
		cout<<"Int Catch"<<endl; // if we wite double in throw and call this unexpected message displayed
	}
	catch(MyException2 e){
		cout<<"child class exception"<<endl;
	}
	catch(MyException1 e){
		cout<<"parent class exception"<<endl;
	}
	catch(...){   // always at last
		cout<<"All Catch"<<endl;
	}
}
