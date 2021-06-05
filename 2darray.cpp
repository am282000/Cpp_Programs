//Traversing all elements

#include<iostream>
using namespace std;
int main(){
//	int A[2][3]={1,2,3,4,5,6};  //or initialise like this
	int A[2][3]={{1,2,3},{4,5,6}};
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
//			cout<<"("<<i<<","<<j<<") ";
			cout<<A[i][j]<<ends;
		}
		cout<<endl;
	}
}
