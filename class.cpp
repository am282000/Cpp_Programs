
//Abstraction


#include<iostream>
using namespace std;

class Rectangle {
    public:    // if i dont write it .. It is by default private.. normlly data members ko private rkhte h ..functions ko public
    int length;    //data members
    int breadth;

    int area(){         // function
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};    // semicolon is mandatory at the end of a class

int main(){
    Rectangle r1,r2;         // creating 2 objects    // here Rectangle is an user defined datatype  // r1,r2 take space in stalk
        // how much space r1 take in memory .. It take space as declared for Rectangle i.e 4 byte+4byte => 8 byte(length+breadth)
        //Note : function will not occupy any memory .
    r1.length=10;    //we can acess the members of Rectangle class by dot operator
    r1.breadth=-5;
    cout<<r1.area()<<endl;    // area function is called

    r2.length=15;
    r2.breadth=15;
    cout<<r2.perimeter()<<endl;
}
