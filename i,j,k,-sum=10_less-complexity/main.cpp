# include <bits/stdc++.h>
using namespace std;
int ok, T, n;
long long P, A[1005];

int BinarySearch (int Left, int Right, long long X)
{
    int mid;

    while (Left<=Right) {
        mid=(Left + Right)/2;
        if (A[mid]==X) return 1;
        else if (A[mid] > X) Right=mid-1;
        else Left=mid+1;
    }
    return -1;
}

int main ()
{
    cout<<"No of Questions"<<endl;
    cin>>T;  //no of questions
    for (int t=1; t<=T; ++t) {
        cout<<"Enter size of array"<<endl;
        cin>>n;  //size of array

        cout<<"Enter array elements"<<endl;
        for (int i=1; i<=n; ++i)
            cin>>A[i];  //inputing array elements
        cout<<"Sum what you are searching(of any 3 no)"<<endl;
        cin>>P;    //whatever is the sum of any 3 no
        sort (A+1, A+n+1);

        cout<<"Final sorted array"<<endl;
        for (int i=1; i<=n; ++i)
            cout<<A[i]<<" ";
        ok=0;
        for (int i=1; i<n; ++i)
            for (int j=i+1; j<=n; ++j) {
                long long auxSum=P - A[i] - A[j];

                if (BinarySearch(j+1, n, auxSum)==1) // ==1 means if this condition is true
                    ok=1;

            }

        if (ok==1) cout<<"YES\n";
              else cout<<"NO\n";
    }

    return 0;
}
