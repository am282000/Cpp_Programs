#include<iostream>
using namespace std;
int main(){
	int no,sum=0;
	cout<<"Enter no ";
	cin>>no;
	for(int i=0;i<=no;i++){
		sum=sum+i;
	}
	cout<<"Sum is "<<sum;
	return 0;
}
