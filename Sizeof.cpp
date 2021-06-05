#include<iostream>
using namespace std;
int main(){
char c;
int i;
float f;
long l;
double d;
long double ld;
cout<<"size of a char is : "<<sizeof(c)<<endl;
cout<<"size of an int is : "<<sizeof(i)<<endl;
cout<<"size of a float is : "<<sizeof(f)<<endl;
cout<<"size of a long is : "<<sizeof(l)<<endl;
cout<<"size of a double is : "<<sizeof(d)<<endl;
cout<<"size of a long double is : "<<sizeof(ld)<<endl;

cout<<CHAR_MIN<<" "<<CHAR_MAX<<endl;
cout<<INT_MIN<<" "<<INT_MAX<<endl;

unsigned char uc;
cout<<"SIze of unsigned char "<<UCHAR_MAX<<endl;
return 0;
}
