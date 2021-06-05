#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
public:
    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }

    void display(){                       // game changer - iske bina cout ko hi access nhi kr skte Complex datatype k sath
        cout<<real<<" + "<<img<<"i";
    }

   Complex operator+(Complex x){
       Complex temp;
        temp.real = real+x.real;
        temp.img = img+x.img;
        return temp;
   }

};


int main(){
    Complex c1(3,4);
    Complex c2(5,6);
    Complex c3;
    c3=c1+c2;
    c3.display();
    //cout<<c3.real<<" + "<<c3.img<<"i";   // for this to work make class as public - Aslii game changer
}




// We can also operation -, *,/  simillary ... also make matrix addition subtraction and multiplication by this .
