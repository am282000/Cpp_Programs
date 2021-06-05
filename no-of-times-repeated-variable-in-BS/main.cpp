#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int A[],int n, int X, int OK){
    int Left=1,Right=n,mid;
    int Result=-1;
    while(Left<=Right){
        mid=(Left+Right)/2;

        if(X==A[mid]){
            Result=mid;
        if(OK==1) Right=mid-1;  //First occurance
        if(OK==2) Left=mid+1;  //Last occurance
        }else if(X<A[mid])
            Right=mid-1;
        else
            Left=mid+1;
    }
    return Result;
}

int main(){
    int A[]={1,1,1,3,3,3,3,3,3,3,5,6,6,8,9,9};
    int FirstOccurance=BinarySearch(A,16,3,1);   // in which array, no of total elements, no you want to search, Ok value
    int LastOccurance=BinarySearch(A,16,3,2);

    if(FirstOccurance==-1)
        cout<<"The element is not in the array";
    else
        cout<<"The element appears "<<LastOccurance - FirstOccurance +1<<" times";
    return 0;
}
