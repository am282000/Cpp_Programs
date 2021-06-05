#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A[]={1, 4, 0, 2, 5, 10, 9}; // index start from 0 .....upto 6

    //sort(A+0,A+4);  //Let supppose wana sort some particular index
    sort(A+0,A+7);  // sort(first position,last position+1,comparison func (optionl))
    //by default it arrange in ascending order

    for(int i=0;i<=6;i++)
    cout<<A[i]<<" ";
    return 0;
}
