#include<iostream>
using namespace std;
int main(){
	int i=0;
	do{
		cout<<++i<<" Virus  \n";
//		i++;   // if we don't put this . it will come in an infinite loop.
	}while(i<10);
}
