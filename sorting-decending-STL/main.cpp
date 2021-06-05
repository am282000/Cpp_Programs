#include <bits/stdc++.h>

using namespace std;

bool cmp(int X,int Y){
    return X>Y;
}
int main()
{
    int A[]={1, 4, 0, 2, 5, 10, 9}; // index start from 0 .....upto 6


    sort(A+0,A+7,cmp);  // sort(first position,last position+1,comparison func (optionl))
    //by default it arrange in ascending order

    for(int i=0;i<=6;i++)
    cout<<A[i]<<" ";
    return 0;
}


//complexity is O(n*logn)   which is lesser than O(n^2)

