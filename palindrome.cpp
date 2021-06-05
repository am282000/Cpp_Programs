#include<iostream>
using namespace std;
int main(){
	int n,r,num,rev=0;
	cout<<"enter a no ";
	cin>>n;
	num=n;
	do{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}while(n!=0);
	cout<<rev<<endl;
	if(num==rev){
		cout<<"Palindrome";
	}
	else 
		cout<<"Not palindrome";
}
