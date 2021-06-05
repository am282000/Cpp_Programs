
// #1 => Vector
/*
// if we dont give the size vector will create an array of size 16.
// else give the size here  vector<int> v(10);

#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector <int> v={2,4,6,7,8,10};
	v.push_back(20);
	v.push_back(30);
	
	v.pop_back();
	
	vector<int> :: iterator itr;
	cout<<"Using Iterator "<<endl;
	for( itr=v.begin(); itr!=v.end();itr++ )   // here itr is like a pointer to that vector array values
		cout<<++*itr<<endl;	// use * that is also called as dereferencing operator  // using this iterator we can modify the value
	
	cout<<"Using forEach Loop"<<endl; 
	for(int x:v )           // for each loop 
		cout<<x<<endl;
}
*/


//Note: we can use vector , list , forward-list easily bu replacing vector and writing whatever we are going to use

// #2 => List => using doubly linked list inside pc 

/*
#include<iostream>
#include<list>

using namespace std;

int main(){
	list  <int> v={2,4,6,7,8,10};
	v.push_back(20);
	v.push_back(30);
	
	v.pop_back();
	
	list <int> :: iterator itr;
	cout<<"Using Iterator "<<endl;
	for( itr=v.begin(); itr!=v.end();itr++ )   // here itr is like a pointer to that vector array values
		cout<<++*itr<<endl;	// use * that is also called as dereferencing operator  // using this iterator we can modify the value
	
	cout<<"Using forEach Loop"<<endl; 
	for(int x:v )           // for each loop 
		cout<<x<<endl;
}
*/



// #3 => Forward_List => using singly linked list inside pc 

/*
#include<iostream>
#include<forward_list>

using namespace std;

int main(){
	forward_list  <int> v={2,4,6,7,8,10};
	v.push_front(20);  // we can't use push back here 
	v.push_front(30);
	
	//v.pop_front();
	
	forward_list <int> :: iterator itr;
	cout<<"Using Iterator "<<endl;
	for( itr=v.begin(); itr!=v.end();itr++ )   // here itr is like a pointer to that vector array values
		cout<<++*itr<<endl;	// use * that is also called as dereferencing operator  // using this iterator we can modify the value
	
	cout<<"Using forEach Loop"<<endl; 
	for(int x:v )           // for each loop 
		cout<<x<<endl;
}
*/


// #4 => set => return unique value 

#include<iostream>
#include<set>

using namespace std;

int main(){
	set <int> v={2,4,6,7,8,10,10};  //it will give 10 unique times
	v.insert(20);  // we can't use push_front back here 
	v.insert(30);
	
	
	set <int> :: iterator itr;
	cout<<"Using Iterator "<<endl;
	for( itr=v.begin(); itr!=v.end();itr++ )   // here itr is like a pointer to that vector array values
		cout<<*itr<<endl;	// even i can't modify this value
	
	cout<<"Using forEach Loop"<<endl; 
	for(int x:v )           // for each loop 
		cout<<x<<endl;
}


// in java also stl is their that is caled as collection 