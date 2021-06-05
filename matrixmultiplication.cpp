#include<iostream>
using namespace std;
int main(){
	int a[10][10] , b[10][10],mult[10][10],r1,c1,r2,c2,i,j,k;
	
	cout<<"Enter no of rows and columns for Matrix 1 :";
	cin>>r1>>c1;
	cout<<"Enter no of rows and columns for Matrix 2 :";
	cin>>r2>>c2;
	
	if(c1!=r2)
	{
		cout<<"Matrix can't be multiplied .";
		return 0;
	}
	
	//Storing elements in Matrix 1
	cout<<"Enter elements for Matrix 1 :";
	for(i=0;i<r1;++i){
		for(j=0;j<c1;++j){
			cout<<"Enter element a"<<i+1<<j+1<<" : ";
			cin>>a[i][j];
		}
	}
	
	//Storing elements in Matrix 2
	cout<<"Enter elements for Matrix 1 :";
	for(i=0;i<r2;++i){
		for(j=0;j<c2;++j){
			cout<<"Enter element b"<<i+1<<j+1<<" : ";
			cin>>b[i][j];
		}
	}
	
	//Multiplying matrix a and b
	for(i=0;i<r1;++i){
		for(j=0;j<c2;++j){
			mult[i][j]=0;
			for(k=0;k<c1;++k){
				mult[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	//Displaying matrix a*b
	cout<<"Output Matrix :";
	for(i=0;i<r1;++i){
		for(j=0;j<c2;++j){
			cout<<" "<<mult[i][j];
			if(j==c2-1)
			cout<< endl;
		}
	}
	return 0;
	
}
