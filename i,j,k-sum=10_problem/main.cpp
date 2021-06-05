#include <bits/stdc++.h>

using namespace std;

int n, ok =0, P=10;
int A[100];
int main()
{
    cout<<"Enter size of array "<<endl;
    cin>>n;
    cout<<"Enter elements of the array"<<endl;
    for(int z=1;z<=n;++z)
    cin>>A[z];

    cout<<"Final Array ";
    for(int z=1;z<=n;++z)
        cout<<A[z]<<" ";

        //complexity O(n^3)

    for(int i=1;i<n;++i)
        for(int j=i+1;j<n;++j)
            for(int k=j+1;k<=n;++k)
             if(A[i]+A[j]+A[k]==P)
                ok=1;
    if(ok==1)
        cout<<"\nYes";
    else
        cout<<"\nNo";

    return 0;
}
