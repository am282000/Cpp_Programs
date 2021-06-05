#include <bits/stdc++.h>

using namespace std;

int n,X,A[101];
int maximum;
int main()
{
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>X;
        ++A[X];
        maximum=max(maximum,X);
    }

    for(int i=0;i<=maximum;++i){
        if(A[i]>0){
            for(int j=1;j<=A[i];++j)
                cout<<i<<" ";
        }
    }
    return 0;
}
