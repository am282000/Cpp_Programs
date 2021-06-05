#include <iostream>

using namespace std;
int a;
int X;
printing(int X){
    cout<<X<<endl;   // will print 100
}

int main()
{
    a=100;
    printing(a);
    cout<<X;    // will print 0
    return 0;
}
