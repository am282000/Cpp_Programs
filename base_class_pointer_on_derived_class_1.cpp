
#include<iostream>
using namespace std;

class Base{
public:
    fun1(){
        cout<<"I am chuzaaa..."<<endl;
    }
};

class Derived : public Base{
public:
    fun2(){
        cout<<"I am billuuu...."<<endl;
    }
};

int main(){

    Derived d;
    Base *ptr = &d;   // ptr base class ka h .... object derived class ka h ...
    ptr->fun1();       // We can make babies from papa ... but only papa ki hi properties honi hi cahiye !!!

   /*
   Base b;
   Derived *ptr = &b;   // we can't make papa's from children
   ptr->fun1();
   ptr->fun2();
   */
}
