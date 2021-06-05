#include <bits/stdc++.h>

using namespace std;

int n,mQuery,i,j,X;
int Result,Left,Right,mid;
int A[10000];
ifstream f("data.in");
int main()
{
    f>>n;
    for(i=1;i<=n;++i)
        f>>A[i];

    f>>mQuery;
    for(j=1;j<=mQuery;++j){
        f>>X;
        Result=0;Left=1;Right=n;
        while(Left<=Right){
                mid=(Left+Right)/2;
            if(A[mid]==X){
                Result=mid;
                Right=mid-1;
            }
            else if(A[mid]<X)
                Left=mid+1;
            else
                Right=mid-1;
        }
        cout<<Result<<" ";
    }
    return 0;
}
