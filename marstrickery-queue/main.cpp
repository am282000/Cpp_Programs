#include <bits/stdc++.h>

using namespace std;
ifstream f("data.in");

int Aelements,i,j,A[1000],Left,Right,X,mQueries,B[1000],auxB;
int main()
{
    f>>Aelements;
    for(i=1;i<=Aelements;++i)
        f>>A[i];

    f>>mQueries;
    for(j=1;j<=mQueries;++j){
        f>>Left>>Right>>X;
        B[Left]=B[Left]+X;
        B[Right+1]=B[Right+1]-X;
    }

    for(i=1;i<=Aelements;++i){
        auxB+=B[i];
        A[i]+=auxB;

        cout<<A[i]<<" ";
    }
    return 0;
}
