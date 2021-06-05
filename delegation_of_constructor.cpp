#include<iostream>
using namespace std;

class Rectangle{
	int length;
	int breadth;
public:
	Rectangle(int l, int b){
		length=l;
		breadth=b;	
	}
	Rectangle():Rectangle(9,9){}   // we can inherit the properties of above constructor and no need to write heavy code inside it again
	int area(){
		return length*breadth;
	}
};

int main(){
	Rectangle r;
	cout<<r.area();
}