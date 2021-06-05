#include<iostream>
using namespace std;
int main(){
	int *p=new int[5];   // heap memory created by new and accessed only through pointer
	p[0]=5;
	p[1]=8;
	cout<<p[1];   
	
	delete []p;  // delete heap memory
	p=NULL;  // we can declare it after delete only ... if it witten 1st it meaning pointr is not pointing anything but data is still there in heap 
	// in modern c++ we use nullptr instread of  null
	return 0;
		
}
