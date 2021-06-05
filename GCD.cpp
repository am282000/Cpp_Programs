#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"Enter 2 no "<<endl;
	cin>>m>>n;
	while(m!=n){
		if(m>n)
		m=m-n;
		else if(n>m)
		n=n-m;
	}
	cout<<m;  //can write m or n.
}
