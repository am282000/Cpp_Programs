#include<iostream>
using namespace std;

class Rectangle {
    int length;
    int breadth;
public:
    Rectangle(int length, int breadth){       // let sppose i wana give same names
       this->length=length;              // this-> length is the global one ..... global=local
       this->breadth=breadth;            //otherwise it show samw name ambiquity
    }

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r(10,2);
    cout<<r.area();
}
