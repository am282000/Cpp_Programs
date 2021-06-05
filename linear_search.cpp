// no need of sorting required

#include<iostream>
using namespace std;

int Search(int arr[], int n , int key){
    for(int i=0;i<n;i++)
        if(key==arr[i])
            return i+1;   // coz normal bnde ko counting 1 se aati hai
        return -1;  //if not found than return this
}

int main(){
    int arr[]={2,43,5,7,9,4,92,51};  // unsorted array // index value starting from 0
    cout<<"Array is : ";
    for(int k=0;k<7;k++){
    cout<<arr[k]<<" ";  //pring the original array on screen
    }
    int k;
    cout<<"\nEnter the element you want to search :";
    cin>>k;  // take input of element you want to search
    cout<<"Element found at "<<Search(arr,7,k)<<" index.";
    return 0;
}
