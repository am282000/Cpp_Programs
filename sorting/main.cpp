#include <bits/stdc++.h>

using namespace std;

int i,j,n;
int A[1000];
int main()
{
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    for(i=0;i<n;++i)
        cin>>A[i];

    for(i=0;i<n;++i)
        for(j=i+1;j<n;++j)
        if(A[i]>A[j])
            swap(A[i],A[j]);

    cout<<"Final Array"<<endl;
    for(i=0;i<n;++i)
        cout<<A[i]<<" ";
    return 0;
}
