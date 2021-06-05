#include<iostream>
using namespace std;

class Test{
    int a;
    int *p;
public:
    Test(int x){       // constructor
        a=x;
        p = new int [a];    // new array of size a is created
    }

    Test (Test &t){         //copy constructor
        a=t.a;
        //p=t.p;   // iis wrong .. becoz thats how it is pointing the same array as above constructor is pointing
        p = new int[a];      //do it like this
    }
};


int main(){
    Test t(5);
    Test t2(t);   // calling copy constructor
}
