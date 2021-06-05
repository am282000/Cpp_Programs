
#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
public:
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

    int area(){         // this will not act as a function => it acts like part of int main
       return length*breadth;
    }

    int perimeter();    // declare bhaar kr deinge koi nhi - scope resolution h to apne pass
};

int Rectangle :: perimeter(){     // ReturnType ClassName :: FunctionName(){   }
    return 2*(length+breadth);
}

int main(){
    Rectangle r;
    r.setLength(10);
    r.setBreadth(3);
    cout<<r.perimeter();
}


/*
Note :  Always write a function outside the class using scope resolution opr.
        Otherwise it will create memory in int main code block */
