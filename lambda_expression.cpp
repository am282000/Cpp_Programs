//Lambda Expression or unnamed function is the same thing .

//General format [](){};
// General format [capture_list](parameter_list)-> returntype{body};  // returntype is optional
//either we can assign it to some variable and than print it as variablename();    or give () this in the end of general format


/*
#include<iostream>
using namespace std;

int main(){
	//Non parameterized
	[](){cout<<"Hey";}();
									//if(cout<<"Babes"){}   // writing babes without semicolumn
	auto a= [](){cout<<" Babes";};
	a();
	
	//parmeterized
	[](int x,int y){cout<<endl<<"Sum : "<<x+y<<endl;}(10,5);
	cout<<([](int x,int y){return x+y;}(10,22));  // we can direct cout it like this
	int z= [](int x,int y)->int{return x+y;}(10,22);   // ->int is optional
	cout<<z<<endl;
	
	//capture _list => on local variable
	int i=10;
	int j=30;
	[i,j](){cout<<i<<" "<<j<<endl;}();    // capture list 
	[&i,&j](){cout<<++i<<" "<<++j<<endl;}();    // i te j da address pa do ...kuki i nd j ko modify krna h
	[&](){cout<<i++<<" "<<++j;}();    // sbka address paa do 
}
*/


// we can also pass lamba as an template literal

#include<iostream>
using namespace std;

template <typename T>   // je tussi class ute template literal la re oo taa .. class keyword likhdo ...ni taah typename likhe in case of func
void fun(T p){
	p();
}

int main(){
	int u=4;
	int v=5;
	auto f= [&u,&v](){cout<<++u<<" "<<++v<<endl;};
	fun(f);
	++u;
	fun(f);
}