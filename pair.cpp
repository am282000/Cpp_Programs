/*
Input:
Values =    10  16  7   14  5   3   12  9
Index  =    0   1   2   3   4   5   6   7

Middle
Stage  =    3   5   7   9   10  12  14  16
Index  =    5   4   2   7   0   6   3   1


Output:
Values =    4   7   2   6   1   0   5   3
Index  =    0   1   2   3   4   5   6   7
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool myCompare(pair<int,int> p1, pair<int,int>p2){
    return p1.first<p2.first;
}

int main(){
    int arr[]={10,16,7,14,5,3,12,9};
    vector<pair<int,int>> v;

    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        /*
        pair<int,int> p;
        p.first=arr[i];
        p.second=i;
        v.push_back(p);
        */

        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end(),myCompare);     //myCompare = comparator

    //update p2
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }
    for(int i=0;i<v.size();i++)
        cout<<arr[i]<<" ";

    return 0;

}
