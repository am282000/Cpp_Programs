#include<iostream>
using namespace std;
int main(){
	int A[10][10];
	int B[10][10];
	int C[10][10];
	int c,r;
	system("cls");  
	//input matrix A
	cout<<"enter no of rows for Matrix A"<<ends;
	cin>>r;
	cout<<"enter no of columns for Matrix A"<<ends;
	cin>>c;
	
	cout<<"enter elements for Matrix A "<<endl;	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>A[i][j];
		}
	}
	
	//input matrix B
	
	cout<<"enter elements for Matrix B"<<endl;	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>B[i][j];
		}
	}
	
	//Multiplication of 2 matrices
	cout<<"Multiplication of 2 matrix is : "<<endl;	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			C[i][j]=0;
			for(int k=0;k<c;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	
	//print the result
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<C[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
