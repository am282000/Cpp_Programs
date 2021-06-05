#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	
	
	while(t >=1){
		int w,h;
		long n,sheets=1;
		cin>>w>>h>>n;
		while (w%2==0){
			w=w/2;
			sheets=sheets*2;
		}
		
		while (h%2==0){
			h=h/2;
			sheets=sheets*2;
		}
		
		if(sheets>=n)
		cout<<"YES";
		else
		cout<<"NO";
	}
	return 0;
}
