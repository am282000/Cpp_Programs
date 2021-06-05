
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

    friend ostream & operator<< (ostream &o,Complex &c);

    friend Complex operator+(Complex c1,Complex c2);
};
ostream & operator<< (ostream &o,Complex &c){   // now we can cout<<c1<<c2..  - ( ostream &o )is used for cout
        o<<c.real<<" + "<<c.img<<"i";         // now o is used as object here
        return o;
    }

Complex operator+(Complex c1,Complex c2){   // line 53 is also called as signature of the function
       Complex temp;
        temp.real = c1.real+c2.real;
        temp.img = c1.img+c2.img;
        return temp;
   }

int main(){
    Complex c1(3,4);
    Complex c2(5,6);
    Complex c3;
    c3=operator+(c1,c2);            //c3=c1+c2;      // we can also write it as
    cout<<"Sum of ("<<c1<<") and ("<<c2<<") is : "<<endl;
    cout<<c3;    // now we can directly get value of c3 on screen
}

// similarly we can do for extraction operator i.e. >>
