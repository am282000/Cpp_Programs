#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<"enter size of array ";
	cin>>size;
	int *p=new int[size];
	
	delete []p;
	cout<<"enter new size";
	cin>>size;
	p=new int[size];
	
	cout<<sizeof *p;
	
	return 0;
}
