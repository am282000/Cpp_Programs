#include<iostream>
using namespace std;
int main(){
	int n;
	float num[100],sum=0.0,average;
	cout<<"enter no of elements";
	cin>>n;
	
	for(int i=0;i<n;++i){
		cout<<i+1<<". Enter no: ";
		cin>>num[i];
		sum+=num[i];
	}
	
	average=sum/n;
	cout<<"Average of these no is "<<average;
	return 0;
	
}
