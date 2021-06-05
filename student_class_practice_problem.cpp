#include<bits/stdc++.h>
using namespace std;

class Student{
    int roll,phy,chem,mat;
    string name;
public:
    Student(int r,string n,int p,int c,int m){
        roll=r;
        name=n;
        phy=p;
        chem=c;
        mat=m;
    }
    int totalMarks();
    char grade();
};



int Student :: totalMarks(){
    return phy+chem+mat;
}

char Student :: grade(){
    float avg=totalMarks()/3;
    cout<<"Average marks : "<<fixed<<setprecision(2)<<avg<<endl<<"Grade : ";

    if(avg>=80)
        return 'A';
    if(avg<80 && avg >=50)
        return 'B';
    if(avg<50 && avg>=30)
        return 'C';
    else
        return 'F';
}

int main(){
    int roll;
    string name;
    int phy,chem,mat;

    cout<<"Enter Roll no : ";
    cin>>roll;
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter marks of PCM Subjects :  ";
    cin>>phy>>chem>>mat;

    Student s(roll,name,phy,chem,mat);

    cout<<"Total Marks : "<<s.totalMarks()<<endl;
    cout<<s.grade();
}
