#include<iostream>
using namespace std;
int main(){
	int max=INT_MIN;
	int A[6]={1,2,3,87,9,71};
	for(int i;i<6;i++){
		if(A[i]>max)
		max=A[i];
	}
	cout<<max;
	return 0;
} 
