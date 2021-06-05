
//why default arguement func ? By this we can combine the 2 overloaded func into one default func..how? seed_seq

/*
#include<iostream>
using namespace std;

int add(int x,int y){
return x+y;
}
int add(int x,int y,int z){
return x+y+z;
}

int main(){
cout<<add(5,9)<<endl;  // it will call 1st func
cout<<add(3,11,12)<<endl;  // it will call 2nd func
cout<<add(3,11,0)<<endl;    // it will call 2nd but what is its need if we combine both in same
}
*/

//2nd method
/*
#include<iostream>
using namespace std;

int add(int x,int y,int z=0){ //here z=0 ..acts as defaults arguement ..if we pass x and y only it will take z=0
return x+y+z;   // else it will overwrite the value of z.
}

int main(){
cout<<add(5,9)<<endl;
cout<<add(3,11,12)<<endl;
cout<<add(3,11,0)<<endl;
}
*/

//Note - we can make as many as default arguements
// the only condition is start making it from right to left .. we can't skip any value in between
//e.g int fun(int a=0 , int b, int c=0,int d=0)  we can't do it like this.


// 3rd function =>greatest no with default arguements
#include<iostream>
using namespace std;

int maxof(int a=0,int b=0,int c=0){
    return a>b && b>c ? a:(b>c? b :c);
}

int main(){
cout<<maxof()<<endl;
cout<<maxof(9)<<endl; //to make it correct we need to take equal vala case also
cout<<maxof(5,9)<<endl;
cout<<maxof(3,11,12)<<endl;
cout<<maxof(3,11,0)<<endl;
}
