#include<iostream>
using namespace std;
int main(){
	//operation we cn perform on pointers;
	int A[6]={1,2,3,4,5,6};
	int *p =A;
	
	cout<<*p<<endl; // this will return A[0]
	p++;
	cout<<*p<<endl;	
	p--;
	cout<<*p<<endl;
	cout<<p<<endl; //address of A[0]
	p=p+2;
	cout<<p<<endl;   //address of A[2]   1int=4byte in our compiler
	p=p-2;
	cout<<*(p+2)<<endl; // than we get the values
	cout<<*p<<endl;
	
	cout<<"Display all the elements"<<endl;
	
	for(int i;i<6;i++){
		cout<<*(A+i)<<endl;
	}
	
	cout<<"check for the 5th condition"<<endl;
	int *q=&A[4];
	cout<<q-p<<"\n";  //how much element away they are from each other
	cout<<p-q;
	return 0;
}

//Note imp A[i]=i[A]=*(A+i)=*(p+i)=p[i]   returns values
//A+i =  p+i   returns addresses
