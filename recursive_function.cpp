//function calling itself again and again till the base condition satisfies
#include <iostream>
using namespace std;

int rec(int n){
    if (n>0){
        cout<<n;       // debug it to check carefully  // 5 4 3 2 1
        rec(n-1);
        //cout<<n;        // if we put it here ... output is 1 2 3 4 5 ...coz first it will become 5 4 3 2 1 than 0 than out of loop
                      // than to end n=1 vala loop ... it will print 1 first .. than end n=2 vala lopp print 2 ..and so on
    }
}
int main(){
    int n=5;
    rec(n);  // this func will run 6 times actually ... also it will terminate itself 6 times.
}


//Note- recurrsin is better than loops
