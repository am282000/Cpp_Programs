#include <iostream>

using namespace std;
int a;
printing(){
    //a=5;  //if we write a=5 here than both 5  5 is printed on output
    cout<<a<<endl;
    a=5;
    cout<<a;
}
int main()
{
    a=100;
    printing();
    cout<<a; //print a=100 globally
    return 0;
}
