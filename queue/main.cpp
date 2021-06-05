#include <bits/stdc++.h>

using namespace std;

int Queue[1000];
int backInd=-1;
int frontInd=0;

void push(int x){
    ++backInd;
    Queue[backInd]=x;
}
void pop(){
    Queue[frontInd]=0;
    ++frontInd;
}
bool isEmpty(){
    if(backInd<frontInd)
        return true;
        else return false;
}
int front(){
    return Queue[frontInd];
}
int main()
{
    push(5);
    push(6);
    push(7);
    cout<<front()<<endl;

    pop();
    pop();
    pop();
    cout<<front();

    return 0;
}
