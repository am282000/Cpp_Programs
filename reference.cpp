#include<iostream>
using namespace std;
int main(){
	int x=10;
	int &y=x;   // y is the alias of x.... x ko y k naam se bhi jana jayega
	int b=20;
	//&y=b;  //can't assign this &y again 
	
	cout<<x<<endl;
	x++;
	y++;
	cout<<y<<endl;
	cout<<&x<<"  "<<&y;  //same addresss
}
