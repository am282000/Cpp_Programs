
// let us understand it with an e.g

/*
#include <iostream>
using namespace std;

int g=0; // declared globally => in backend it have a special block in code area .. where the value is stored till the program
         // kis running
fun(){
    int a=5;
    g++;
    cout<<a<<" "<<g<<endl;
}

int main(){
    fun();   // output 5  1
    fun();   // output 5  2     becoz value of g is gloabal thats why stored it a special block .
    fun();   // output 5  3
}
//in main we arre just calling the fun 3 times . A;ll printing work is done by fun()

*/


//Static function=>  instead of globally we want it in a func. ... also want to work it as that global func

/*
#include <iostream>
using namespace std;

fun(){
    static int g=0;     // if we don't put static it will print 5  1      5   1      5   1
    int a=5;
    g++;
    cout<<a<<" "<<g<<endl;
}

int main(){
    fun();   // output 5  1
    fun();   // output 5  2
    fun();   // output 5  3
}
*/
// in short static => is global but limited to a func scope ... becoz it is using as a local variable here.


// in java we cant use static func inside a method(or function).


// 1 more simple program to clear all your doubts
#include <iostream>
using namespace std;

fun(){
    static int g=0;     // if we don't put static it will print 1       1        1
    g++;
    cout<<g<<endl;
}
int main(){
    fun();   // output   1
    fun();   // output   2
    fun();   // output   3
}
