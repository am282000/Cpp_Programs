#include<iostream>
using namespace std;
int main(){
	int A[5]={12,30,43,56,7};
	int key;
	
	cout<<"enter key";
	cin>>key;
	for(int i=0;i<5;i++){
		if(key==A[i]){
			cout<<"found at "<<i;
			exit(0);  //exit from loop
		}
	}
	cout<<"not found";
} 
