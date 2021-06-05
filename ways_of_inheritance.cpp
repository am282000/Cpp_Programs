
#include<iostream>
using namespace std;

class Parent{
    private: int a;
    protected: int b;
    public: int c;

public:
    void funParent(){
        a=10;
        b=20;
        c=30;
    }
};

class Child: private Parent {
public:
    void funChild(){
        //a=10;
        b=20;
        c=40;

    }
};

class GrandChild: public Child {
public:
    void funChild(){
        //a=10;
        //b=20;
        //c=40;

    }
};

int main(){
    Child c;
    //c.a=40;
    //c.b=50;
    //c.c=60;
     //cout<<c.c;
}


// Bs tym pass kr rhe h ... bs access kr rhe h as private ,protected, public
