// For enchancing streams and formatting streams

/*
endl
ends
int:
	dec
	hex
	oct
float:
	fixed - hmesha decimal k baad 6 digits show krega 
	scientific -change the value in scientific notation. by using exponent and of mantisaa
set()
left  - isse phle jitne bhi white space honge uske sbse starting m le aayega
right - isse phle jitne bhi white space honge uske sbse last m le jaayega
ws - used to ignore whitespace from string
cout.width() or setw()  - setw means starting m ya last m kitne space cahiye on output screen 
*/

#include<iostream>
#include <iomanip> 		//std::setw()
#include <sstream>      // std::istringstream, std::ws  
using namespace std;
int main(){
	cout<<"Hello"<<endl;
	cout<<"Hi"<<ends<<"Baby"<<"\n";
	
	// only applicable on int values
	cout<<dec<<10<<endl;
	cout<<hex<<10<<endl;
	cout<<oct<<10<<endl;

	//only applicable on float values
	cout<<fixed<<12.345<<endl;
	cout<<scientific<<12.345<<endl;
	
	//cout<<setbase(10)<<100<<endl;
	string str("Pokemon");
	cout.width(10);
	cout<<left<<str<<endl;   
	cout.width(10);    // will give spaces
	cout<<right<<str<<endl;
	cout<<setw(50)<<"Hellooo"<<setw(10)<<endl;   //setw means starting m ya last m kitne space cahiye on output screen 
	
	//dimaag ho to hi smjhoo #ws
	istringstream  s("         Chuzaaaaaaaaaaaaaaaaaa            ka bachaaa");           // istringstream is a datatype
	string line;
	getline(s>>ws,line);   // getline ek line m dikha dega sari string value ko .... s k starting se ws htao or new value ko line ko do    
	cout<<line;
}