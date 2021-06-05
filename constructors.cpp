/*
1. Default constructor - that compiler will made automatically.
2. Non-Parameterised Constructor
3. Parameterized Constructor
4. Copy Constructor
*/

// Here we used multiple constructors so it is called constructor overloading


#include<iostream>
using namespace std;

class Rectangle {
// we make data members private i.e. by default they are ...
    int length;    //data members
    int breadth;

    public:

    Rectangle(){             // Non parameterized constructor
        setLength(-10);
        setBreadth(5);
    }

    Rectangle(int l,int b){             //parameterized constructor
        setLength(l);
        setBreadth(b);
    }


   // Rectangle(int l=0,int b=0){             //also a parameterized constructor  = with default values
   //     setLength(l);                         //also act as parameterized and non parameterized
   //     setBreadth(b);                        // remove above 2 constructors to run this
   // }

    Rectangle(Rectangle &rect){    // &rect - call by reference - becoz it would not create more rect for call .
        length= rect.length;
        breadth= rect.breadth;          //copy constructor
    }

    void setLength(int l){
        if(l>=0)
            length=l;
        else
            length=1;
    }
    void setBreadth(int b){
        if(b>=0)
            breadth=b;
        else
            breadth=1;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }

    int area(){         // function  as public
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    //non parameterized
    Rectangle z;    // Reactangle z();   // not giving parameters - this will call non parameterized const
    cout<<z.area()<<endl;
    cout<<"length is "<<z.getLength()<<endl;     // this will also show 1

    //parameterized
    Rectangle r(10,-5);   // giving parameters - this will call parameterized const
    cout<<r.area()<<endl;
    cout<<"length is "<<r.getLength()<<endl;

    //copy constructor
    Rectangle a(z);
    cout<<a.area()<<endl;
    cout<<"length is "<<a.getLength()<<endl;

}

