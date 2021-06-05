// In cpp classs and struct are same  ... only differenece is by default class is private and struct is public


#include<iostream>
using namespace std;

struct Demo{    // everything is public by default
                //private: if i want i can make this private
    int a;
    int b;

    void Display(){
        cout<< a<< " "<< b;
    }
};

int main(){
    Demo d;
    d.a=10;
    d.b=2;
    d.Display();
}




// for a class

/*
#include<iostream>
using namespace std;

class Demo{         // by default everything is private
                    //public: i want i can make it public
    int a;
    int b;

    void Display(){
        cout<< a<< " "<< b;
    }
};

int main(){
    Demo d;
    d.a=10;
    d.b=2;
    d.Display();
}
*/
