
#include<iostream>
using namespace std;

class Base{
public:
    int x;
    void show(){
        cout<<"I am in the base class : "<<x<<endl;
    }
};

class Derived : public Base{
public:
    int y;
    void display(){
        cout<<"I am from Derived class : "<<x<<"  "<<y<<endl;
    }
};

int main(){
    Base b;
    b.x=10;
    b.show();

    Derived d;
    d.x=20;   // if we don't assign value here .. it will take default value as 0
    d.y=30;
    d.display();
    d.show();

}

