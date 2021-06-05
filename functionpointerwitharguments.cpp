#include<iostream>
using namespace std;

int max(int x,int y){
	if(x>y)
		cout<<x<<endl;
	else
		cout<<y<<endl;
}

int min(int x,int y){
//	return x<y?x:y;
	if(x<y)
		cout<<x<<endl;
	else
		cout<<y<<endl;

}
int main(){
	int (*fp)(int,int);   //declaration of func ptr    return type int is as same as of func display   need to pass parameters
	fp=max;		//initialization
	(*fp)(10,5);		//call with passing values
	fp=min;               //this will call min function ....
	(*fp)(10,5);		//one func pointer can point any func with same signature (or same arguements) ...

}
