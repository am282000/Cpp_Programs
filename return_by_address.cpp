// Return by Address
// • Any function also return the address of a memory
// • It can return address of memory allocated in heap
#include<iostream>
using namespace std;
int * fun(int n){    //this will create a function of pointer type
    int *p=new int[n];   // this will create a pointer p which will refer the array in heap memory
    for(int i=0;i<n;i++)
    p[i]=i+1;  //print natural no
    return p;  // returning the address
}
int main(){
    int *ptr=fun(5);
    for(int i=0;i<5;i++)
    cout<<i<<endl;
}

//Note - jha new keyword dikhe => heap memory
// but it is also imp to deallocate the heap memory at last .... yha to nhi kia but krna cahiye
