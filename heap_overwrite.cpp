#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter size of array";
	cin>>size;
	int *p=new int[size];
	
	delete []p;
	
	cout<<"Enter new size";
	cin>>size;
	p=new int[size];
	int i=13;
	cin>>p[i];
	cout<<p[i];
	return 0;
}
