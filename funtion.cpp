// int main  m sb likh dena is called monolithic programming

// that ius dificcult to red , understand , team can't work on it, error causes all program to be stop ,
//memorizing power should be good,can't write in a day , bla bla..so use function for differnt tasks differnt func should be there

//function =reusable pieces, load and unload functions acc to need easily = modular programming

//General format
//return type func name (parameters list)

 // o/p                   i/p
//funct may return 0 value and return atmost one value - if it is returning nothing use void main

//i/p should be 0 or more.

//1st function
/*
#include<iostream>
using namespace std;
void display(){
    cout<<"hello";  //avoid using cin and cout in function
}
int main(){
    display();
}
*/

//2nd function

/*
#include<iostream>
using namespace std;

int add(int x,int y){  //this line is called prototype/header/signature of a func
    int z;
    z=x+y;
    return z;
}

int main(){
    int a=10,b=5,c;  //two different func can have same variables name ..means we can also take x,y,z here
    c=add(a,b);
    cout<<"sum is "<<c;
}
*/

//through pic => function ...cahart is cleared ...after pocessing the function the memory from stalk is automatically deleted

//3rd function
#include<iostream>
using namespace std;

int maxim(int a,int b,int c){
    if(a>b && a>c)
        return a;
    else if(b>c)
        return b;
    else
        return c;
}

int main(){
    int a=10,b=3,c=12;   // we can give the same variable to maxim func
    cout<<maxim(a,b,c);
}
