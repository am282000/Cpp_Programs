//wring func with same name but diff arguements

#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){ //func name same , but different arguement either in numbers or in data type
    return a+b+c;
}
 float add(float a,float b){
    return a+b;
}
int main(){
//int a=10,b=5,c,d;
float a=10.51,b=10.92,c,d;
c=add(a,b);
cout<<c<<endl;
d=add(a,b,c);
cout<<d<<endl;
}

// Note return type is never included in func overloading so
       //int max(int,int);
       //float max(int,int);  is not valid
