#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=8,b=10,maximum;
    maximum=max(a,b);
    cout<<maximum<<"\n";
    swap(a,b);
    cout<<"new a is :"<<a<<endl<<"new b is :"<<b<<"\n";
    int no=2;
    double cubicRoot;
    cubicRoot=pow((double)(no),1.0/3);
    cout<<cubicRoot<<"\n";
    cout<<fixed<<setprecision(12)<<cubicRoot;
    return 0;
}
