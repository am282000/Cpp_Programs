#include <iostream>

using namespace std;

int stack[100],ind;

void push(int x){
    ++ind;
    stack[ind]=x;
}

bool isEmpty(){
    if(ind>=1)
        return false;
        else return true;
}

void pop(){
    stack[ind]=0;
    --ind;
}

int top(){
    return stack[ind];
}
int main()
{
    ind =0;
    push(1);
    push(2);
    if(! isEmpty())
    cout << top()<< endl;
    pop();
    pop();
    return 0;
}
