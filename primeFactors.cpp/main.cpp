//Naive Solution
/*
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==1)
        return false;

    for(int i=2;i<n;++i)
        if(n%i==0)
            return false;
    else
        return true;
}

void primeFactors(int n){
    for(int i=2;i<n;++i){
        if(isPrime(i)){
            int x=i;
            while(n%x==0){          //this while loop keep running till the n is divived by new x; e.g. in 12 = 2* 2*3
                cout<<i<<" ";
                x=x*i;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    primeFactors(n);
}

//complexity O(n^2logn)


*/

//2nd mehod - optimized value

#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n==1)
        return false;    // return 0= not prime
                                            //in this we have running iteration i*i till it is lesser than n only
    for(int i=2;i<=sqrt(n);++i)                //also for(int i=2;i*i<=n;++i)   note here we used <=
        if(n%i==0)
            return false;
    else
        return true;      // return 0 = prime
}

void primeFactors(int n){
    if(n<=1)
        return ;
    for(int i=2;i*i<=n;++i){
        while(n%i==0){
            cout<<i;
            n=n/i;
        }
    }
}

int main(){
    int n;
    cin>>n;
    primeFactors(n);
}
