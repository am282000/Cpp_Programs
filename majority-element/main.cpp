#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=11;
    int A[]={0,1,1,4,5,1,6,6,1,1,3,1};
    sort(A+0,A+n+1);
    cout<<"Sorted Arrray is:"<<endl;
    for(int i=0;i<n;++i)
        cout<<A[i]<<" ";

    int majorityElement = A[(n/2) + 1];
    int mOccurences = 0;

    for(int i=0;i<=n;++i)
        if(A[i]==majorityElement)
            ++mOccurences;

    if(mOccurences>=(n/2) +1){
        cout<<"\nThe majority element is "<<majorityElement<<endl;
        cout<<"and it appears "<<mOccurences<<" times"<<endl;
    }
    else
        cout<<"\nThere is no such element who occurs at least n/2 + 1 times"<<endl;
    return 0;
}
