#include <bits/stdc++.h>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int numberElements,A[1000];
int BinarySearch(int X){
    int Left=1,Right=numberElements,mid;

    while(Left<=Right){
        mid=(Left+Right)/2;

        if(X==A[mid])
            return mid;
        else if(X<A[mid])
            Right=mid-1;
        else if(X>A[mid])
            Left=mid+1;
    }
    return -1;
}
int main()
{
    f>>numberElements;
    //Array A in ascending order
    for(int i=1;i<=numberElements;++i)
        f>>A[i];
    g<<BinarySearch(20);
    return 0;
}
