#include<iostream>
using namespace std;
int main(){
	int sum=0;
	int A[3]={1,2,3};
	for(int i:A)   //for each loop.  work for all 6 elements. //introduced in latest c++ version 11
	sum=sum+i;
	cout<<sum<<endl;
	
//	float A[6]={1,2,3};
//	for(auto i:A)    //auto adjust acc to situation
//	cout<<i<<endl;
	return 0;
}
