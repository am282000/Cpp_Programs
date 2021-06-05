//or we can call it as call by value call by address call by reference
// 1. pass by value
//2. pass by address
//3. pass by reference



//method 1 : call by value => no change in actual x and y. #same value

/*
#include<iostream>
using namespace std;
void swap(int a, int b){  //formal arguements
    int temp;
    temp=a;
    a=b;
    b=temp;
}   // after the execution of this func the formal parameters lose their value
//becoz we returns the value of the actual parameters so the value is not swaped.
//for better explanation look @ parameter_passing_method_1.jpg

int main(){
    int x=10,y=20;  //actual arguements
    swap(x,y);
    cout<<x<<" "<<y;
}
//useful where we want to do some calculation and than return this value at the end of function
*/

//method 2 : call by addresss => change in actual x and y. #swap
//just make all a and b as pointer ... and pass address of x,y from main .

/*
#include<iostream>
using namespace std;
void swap(int *a, int *b){  //formal arguements
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}   // after the execution of this func the formal parameters lose their value
//becoz it overwrites the value on*a and *b i.e. actual parameters so the value is swaped.
//for better explanation look @ parameter_passing_method_2.jpg

int main(){
    int x=10,y=20;  //actual arguements
    swap(&x,&y);
    cout<<x<<" "<<y;
}
*/

//method 3 : call by reference => change in actual x and y. #swap
//reference=> nicknamename of something  ..here a is the reference of x.
//almost same as call by value just add &(ampersent) in the parameters of the func.

#include<iostream>
using namespace std;
void swap(int &a, int &b){  //formal arguements
    int temp;
    temp=a;
    a=b;
    b=temp;
    //only in call by refernce
}   // at the time of execution of this func the computer writes the code of swap in int main .
// than simply a can access value of x i.e. 10 same as with b. than simple swapping is done.
//for better explanation look @ parameter_passing_method_3.jpg

int main(){
    int x=10,y=20;  //actual arguements
    swap(x,y);
    cout<<x<<" "<<y;
}

//Note - this is used for simple functions only dont use complex calculations in this . otherwise it automatically becomes
//call by address
