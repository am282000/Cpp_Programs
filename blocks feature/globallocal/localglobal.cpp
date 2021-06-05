#include<bits/stdc++.h>
using namespace std;

int Aglobal[3];
int a;   //globally cvall

void printing(){
    cout<<a;
}

int main(){
    int Alocal[3];
    cout<<Aglobal[0]<<" "<<Aglobal[1]<<" "<<Aglobal[2]<<endl;
    cout<<Alocal[0]<<" "<<Alocal[1]<<" "<<Alocal[2]<<endl;
    //int a;       // local call
    a=5;
    printing();
    return 0;
}
