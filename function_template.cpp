// function which are generic means generalized in  terms of datatype
// in short function k ander ka maal same ho dono ka bs datatype alg ho uper

/*
#include<iostream>
using namespace std;
int maxof(int x,int y){
    if(x>y)
        return x;
    else
        return y;
}
float maxof(float x,float y){
    if(x>y)
        return x;
    else
        return y;
}

int main(){
    int c=maxof(10,5);   // because max is already a reserved keyword thats why we chhoose name other than it.
    float d=maxof(10.5f,7.9f); //need to write f to convert value into float
    cout<<c<<endl;        //else it will treat it as double
    cout<<d<<endl;
}
*/
//why we write ssme function again for different datatypes ..when we can do


//2nd method => Function template
#include<iostream>
using namespace std;
template<class T>   // defining the returntype T as template class..
T maxof(T x,T y){    // we dont know the return type of T
    if(x>y)
        return x;
    else
        return y;
}

int main(){
    int c=maxof(10,5);   // because max is already a reserved keyword thats why we chhoose name other than it.
    float d=maxof(10.5f,7.9f); //need to write f to convert value into float
    cout<<c<<endl;        //else it will treat it as double
    cout<<d<<endl;
}

//we can write multiple functions together .. when there is only difference in datatypes

// this feature is not there in java and c#

//Note - Both arguements passed are of same datatype either give both int or both float...etc
