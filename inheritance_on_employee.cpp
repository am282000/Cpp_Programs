
#include<iostream>
using namespace std;

class Employee{
    int eid;
    string name;
public:
    Employee(int e, string n){
        eid=e;
        name=n;
    }

    int getEmployeeId(){ return eid;}
    string getName(){return name;}
};

class FullTimeEmployee: public Employee {
    int salary;
public:
    FullTimeEmployee(int e,string n,int s): Employee(e,n){    // this is done to give e,n value to paameterized const of employee class
        salary=s;
    }
    int getSalary(){return salary;}
};

class PartTimeEmployee: public Employee{
    int wage;
public:
    PartTimeEmployee(int e, string n, int w): Employee(e,n){
        wage=w;
    }
    int getWage(){return wage;}
};


int main(){
    FullTimeEmployee fte(1,"Boo Boo",900000);
    PartTimeEmployee pte(2,"Chota Boo",999999);
    cout<<"Salary of Full Time Employee : "<<fte.getName()<<" is "<<fte.getSalary()<<endl;
    cout<<"Wage of Part Time Employee : "<<pte.getName()<<" is "<<pte.getWage()<<endl;
}
