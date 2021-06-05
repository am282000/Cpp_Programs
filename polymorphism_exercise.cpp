#include<bits/stdc++.h>
using namespace std;

class Shape {
public:
	virtual float area()=0;
	virtual float perimeter()=0;
};

class Rectangle: public Shape{
	float length;
	float breadth;
public:
	Rectangle(float l,float b){
		length=l;
		breadth=b;
	}
	float area(){
		return length*breadth;
	}
	float perimeter(){
		return 2*length*breadth;
	}
};

class Circle : public Shape{
	float radius;
public:
	Circle(float r){
		radius=r;
	}
	float area(){
		return 3.1425*radius*radius;
	}
	float perimeter(){
		return 2*3.1425*radius;
	}
};

int main(){
	Rectangle r1(3.5,7.5);
	Circle c1(7.3);
	cout<<"Area of rect : "<<r1.area()<<endl<<"Perimeter of rect : "<<r1.perimeter()<<endl;
	cout<<"Area of circle : "<<fixed<<setprecision(2)<<c1.area()<<endl<<"perimeter of circle : "<<c1.perimeter()<<endl;
}









