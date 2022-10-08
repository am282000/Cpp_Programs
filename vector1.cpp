#include<iostream>
#include<vector>
#include <algorithm> // std::sort
//#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector <int> :: iterator it;

    for(it =v.begin(); it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
    /*
    v.pop_back();
    v.pop_back();
    v.pop_back();
    */

    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;

    vector<int> v2(3,777);
    for(int s:v2)
        cout<<s<<" ";
    cout<<endl;

    swap(v,v2);
    for(int s:v2)
        cout<<s<<" ";
    cout<<endl;
    for(int s:v)
        cout<<s<<" ";
    cout<<endl;

    vector<int> v3{ 1, 10, 33, 9, 6, 7, 3, 4, 2, 0 };

    sort(v3.begin(), v3.end());

    cout << "Sorted \n";
    for (auto x : v3)
        cout << x << " ";

    return 0;
}
