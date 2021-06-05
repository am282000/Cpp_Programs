#include<iostream>
using namespace std;

class Test{
public:
    void fun1(){          // Any function declared in the class is by default inline func
        cout<<"I am an inline function"<<endl;
    }
    inline void fun2();     // if inline is not written here it is non inline ... but it is acting like inline
};

void Test :: fun2(){
    cout<<"I am acting like an inline function.";
}

int main(){
    Test t;
    t.fun1();
    t.fun2();
}


// Note : function is called inline when it is formed in the main block
