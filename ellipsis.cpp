/*
Used for defining variable argument functions
... is used as symbol of ellipsis
Printf and scanf of C language are example of ellipsis
*/


#include<iostream>
#include <stdarg.h>    //standard argument.h

using namespace std;

int sum(int n, ...){		// now we can pass any no of parameters   i.e variable argument
	va_list list;				//declaring variable argument list  and making variableName
	va_start(list,n);			//giving (on whom you wnat to apply, no of argunents)
	
	int s=0;
	for(int i=0;i<n;i++)
		s=s + va_arg(list,int);		//va_arg - retrieve next element from the list.
	
	va_end(list);				//to end the list
	return s;
}

int main(){
	cout<<sum(3,1,4,6);
}