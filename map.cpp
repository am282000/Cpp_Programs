#include<iostream>
#include<map>
using namespace std;

int main(){
	map<int,string> m;
	m.insert(pair<int,string>(1,"Chuhaaa"));  // this is always used as pair only => kabaab m hadddi is not allowed
	m.insert(pair<int,string>(2,"Chuzaaa"));
	m.insert(pair<int,string>(4,"Babyyyy"));
	
	map<int,string> :: iterator itr;
	for(itr=m.begin();itr!=m.end();itr++){
		cout<<itr->first<<" "<<itr->second<<endl;   // most imp => ptr is always spointing on first , second
	}
	
	map<int,string> :: iterator itr1;
	itr1= m.find(1);
	cout<<"Value found ......."<<endl;
	cout<<itr1->first<<" "<<itr1->second<<endl;
}