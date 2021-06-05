
//Abstraction

/*
#include<iostream>
using namespace std;

class Rectangle {
    public:    // if i dont write it .. It is by default private
    int length;    //data members
    int breadth;

    int area(){         // function
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r;
    Rectangle *p;
    p=&r;
    r.length=10;           // this arrow is also called as caps .. by this we can call data members as well as function
    p -> breadth=3;       // arrow function .... it is used in place of dot operator in pointer type object

    cout<<p->area()<<endl;    // area function is called
    cout<<r.area()<<endl;    // area function is called
}
*/



// how to create an object in heap --- all code same just add a new line in main



#include<iostream>
using namespace std;

class Rectangle {
    public:    // if i dont write it .. It is by default private
    int length;    //data members
    int breadth;

    int area(){         // function
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle *p;
    p=new Rectangle;   // this object is formed in heap

    Rectangle *q=new Rectangle;   // or we can create it in a single line also- also write it as Rectangle *q=new Rectangle();

    p -> length=2;
    p -> breadth=3;

    cout<<p->area()<<endl;    // area function is called

    q -> length=12;
    q -> breadth=5;

    cout<<q->area()<<endl;    // area function is called

}




// Note in java we we can't create an object in stack .. only create it in heap using new.
