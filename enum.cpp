#include<iostream>
using namespace std;
enum day {mon=1,tue,wed=10,thu,fri,sat,sun};
//enum is used for defining a group of constansts under one name related to constants.
#define fri 0  // same as assigning fri a constant value.
const int nayavariable=0;
int main(){
	day d;
	d=tue;
//	cout<<d<<endl;
	cout<<mon<<endl<<tue<<endl<<wed<<endl<<thu<<endl<<fri<<endl<<sat<<endl<<sun<<endl<<nayavariable;
}
