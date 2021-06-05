
#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength(){ return length;};
    int getBreadth(){return breadth;};
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};

Rectangle :: Rectangle(){
    length=1;
    breadth=1;
}
Rectangle :: Rectangle(int l,int b){
    length=l;
    breadth=b;
}
Rectangle :: Rectangle(Rectangle &r){
    length= r.length;
    breadth= r.breadth;
}
void Rectangle :: setLength(int l){
    length=l;
}
void Rectangle :: setBreadth(int b){
    breadth=b;
}
int Rectangle :: area(){
    return length*breadth;
}
int Rectangle :: perimeter(){
    return 2*(length+breadth);
}
bool Rectangle :: isSquare(){
    return length==breadth;
}
Rectangle :: ~Rectangle(){
    cout<<"Rectangle destroyed ...";    //automatically called at the end of program
}


//Inheritance starts

class Cuboid : public Rectangle{
    int height;
public:
    Cuboid(int l=0, int b=0,int h=0){
        height=h;
        setLength(l);
        setBreadth(b);
    }

    void setHeight(int h){
        height=h;
    }
    int getHeight(){ return height;};
    int Volume(){
        return getLength()*getBreadth()*height;
    }
     friend ostream & operator<<(ostream &os, Cuboid &c);
};

ostream & operator<<(ostream &os, Cuboid &c){
    os<<c.getHeight();
    return os;
}


int main(){
  Cuboid c(10,2,5);
  cout<<c.Volume()<<endl;
  cout<<c.area()<<endl;
  cout<<c.getLength()<<endl;
  cout<<c<<endl;
}
