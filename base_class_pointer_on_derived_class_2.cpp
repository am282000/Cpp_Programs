

#include<iostream>
using namespace std;

class HondaCity{
public:
    fun1(){
        cout<<"Haaaaaaaaaaayyyyyee gareebaaa "<<endl;
    }
};

class Lamborghini : public HondaCity{
public:
    fun2(){
        cout<<"Boo Booo Ameeerriiiiiii"<<endl;
    }
};

int main(){
    /*
    HondaCity h;
    Lamborghini *ptr = &h;    // bade log mud k choti cheezo p nhi aate
    */
    Lamborghini l;
    HondaCity *ptr = &l;
    ptr->fun1();
    //ptr->fun2();   // Baap baap hotaa hai
}
