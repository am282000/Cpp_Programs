#include<iostream>
using namespace std;

class Base{
public:
    Base(){
        cout<<"I am default Constructor of Base."<<endl;
    }
    Base(int x){
        cout<<"I am Parameterized Constructor of Base."<<x<<endl;
    }
};
class Derived : public Base{
public:
    Derived(){
        cout<<"I am default Constructor of Derived."<<endl;
    }
    Derived(int a){
        cout<<"I am Parameterized Constructor of Derived."<<a<<endl;
    }
    Derived(int x,int a): Base(x){
        cout<<"I am Parameterized Constructor of Derived."<<a<<endl;
    }
};

int main(){
    //Derived d;   // dafault of base ...default of Derived
    //Derived d(10); // default of base ... parametersed of derived << 10 .
    Derived d(5,10); // Parameterized of Base. 5 Parameterized of Derived. 10
}
