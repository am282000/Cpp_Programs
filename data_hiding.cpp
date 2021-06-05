//Encapsulation

/*
#include<iostream>
using namespace std;

class Rectangle {
    // we make data members private i.e. by default they are ...
    int length;    //data members
    int breadth;

    public:
    int area(){         // function  as public
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r1;

    //r1.length=10;    // now we can't access them like this
    //r1.breadth=5;    // now we can't access them like this
    //cout<<r1.area()<<endl;      // now we can't access them like this
}
*/





//Real solution now



#include<iostream>
using namespace std;

class Rectangle {
// we make data members private i.e. by default they are ...
    int length;    //data members
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
    Rectangle r;
    r.setLength(-10);
    r.setBreadth(5);
    cout<<r.area()<<endl;
    cout<<"length is "<<r.getLength();     // this will also show 1
}



/*
Note : property function

    Accessor= getxxx        // read only
    Mutator= setxxx         //write only

*/
