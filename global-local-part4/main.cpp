#include <iostream>

using namespace std;
int A[3][5],i;

printingRow(int row){
    for(i=0;i<5;++i){
        cout<<A[row][i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    for(i=0;i<3;++i){
        printingRow(i);
    }
    return 0;
}

//in this i is a global variable so it is used by both the loops first main loop is executed by i=0 then printingRow func is
// executed with i=0 upto i=5 than i=5 is transferred in main loop where it breaks ...so only one row is printed.


//to make this program work instead of global make i local variable in both loops
