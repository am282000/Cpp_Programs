#include<iostream>
using namespace std;
int main(){
	int basicsalary,allowances,deductions,netsalary;
	cout<<"Enter basic salary ";
	cin>>basicsalary;
	cout<<"Enter % of allowances ";
	cin>>allowances;
	cout<<"Enter % of deductions ";
	cin>>deductions;
	netsalary=basicsalary+basicsalary*allowances/100-basicsalary*deductions/100; 
	cout<<netsalary;
}
