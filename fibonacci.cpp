//0  1    1  2   3   5   8   13
#include<iostream>
using namespace std;
int main(){
 int a=0,b=1,no,c,i;
	cout<<"enter no";
	cin>>no;
	cout<<a<<" "<<b<<" ";
	for( i=1;i<=no;i++){
		c=a+b;
		cout<<c<<ends;
		a=b;
		b=c;
	}
	
}

