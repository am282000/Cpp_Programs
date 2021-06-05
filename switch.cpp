#include<iostream>
using namespace std;
int main(){
	int i=3;
	switch(i){
		// we can also write case 'a': , case 'b':  ......
		case 1: cout<<"one";
		break;
		case 2: cout<<"two";
		break;
		case 3: cout<<"three";
		break;  //fall through - if break statements aren't used .
		default: cout<<"Invalid Statement"; // if we use default uper than must use break after it .
	}
}
