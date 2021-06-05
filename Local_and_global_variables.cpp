// code block , stack, heap
// Global variable is created inside the code block ,
// int main variable created at code block(there is a szeperate block in it for this)
//local variable created in stack which get removed after the functions execute


// Program 1
/*
#include<iostream>
using namespace std;

int g=5;  //global variable
void fun(){
    int a=2;    //local variable
    cout<<a<<endl;
    g++;   //g value is incremented globally
}

int main(){
    int a=10;
    cout<<g<<endl;
    fun();
    cout<<g<<endl;

}
*/

//Note - A global variable can be accessed from anywhere ... its scope all over the program
//       A local variable can be accessed within that func only ... its scope only in that function where it is created



//Program 2 => guess the values of g


#include<iostream>
using namespace std;

int g=5;  //global variable
void fun(){
   int g=10;
   {     //block level scope - in this block value of g become 0.
       int g=0;     // local variable in this block
       g++;
       cout<<g<<endl;
   }
   cout<<g<<endl;  // no change in value outside block .. its again 10
   g++;
   cout<<g<<endl;  // change in value this block .. its becomes 11
   cout<<::g<<endl;  // to access global value in this function use scope resolution

}

int main(){
    int a=10;
    cout<<g<<endl;
    fun();
    cout<<g<<endl;  // no change in global value .. do whatever in function it gona affect until we return value ..
                    // its again 5 as globally

}
