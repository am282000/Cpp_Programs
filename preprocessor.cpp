/*
Preprocessor=> program compile hone se bhi phle m rum houngii  
			 start with #
			 I never take space in the memory.
*/

//1st program
/*
#include<iostream>    // preprocessor - bni bnayi library
using namespace std;

#define pi 3.14;        // # define (with which name we use) (in real what is it replaced with)   // semicolomn is optional
#define pi 22;        //redefine means => jo last m doge vhi chalegi

int main(){
	cout<<pi;
}
*/

//2nd program
/*
#include<iostream>
using namespace std;

#define msg(x) #x;    // if we give direct value withot " "  #x will make it "x"  i.e make it string value
// #define pi 9;     // if already defined it willl rake that one
#ifndef pi           // if already not defiend than take this one
	#define pi 7;
#endif				//end the if condition
int main(){
	cout<<pi;
	cout<<endl;
	cout<<msg(chuzaaa);
}
*/

//Note: We can't use endl after where i am calling the defined keyword 


//3rd method

#include<iostream>
using namespace std;

#define max(x,y) (x>y?x:y)       //we are defining a whole func
#define c cout					//now c is used as cout    // it is called symbolic constant			
#define sq(x) (x*x)				

int main(){
	cout<<max(4,7);
	c<<endl;
	c<<max(5,6);
	c<<endl;
	c<<sq(4);
}



 