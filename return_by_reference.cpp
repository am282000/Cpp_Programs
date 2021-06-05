// Return by Reference
// • A function calls also return a reference
// • It should not return reference of its local variables
// • It can return formal parameters if they are reference

#include<iostream>
using namespace std;
int &fun(int &a){  //make this as refernce variable than reference func
    cout<<a<<endl;
    return a;
}
//this reference function will return value of x
int main(){
    int x=10;
    fun(x);
    cout<<x<<endl<<endl;
    fun(x)=25;  // exception case = although we can never assign a value to func like like ... but in call by reference we can
    cout<<x;    // because computer can write this 2 piece of code only in 1 int main.
}
