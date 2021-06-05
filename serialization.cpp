// Serialization => process of string and retrieving state of an object
//				   class must have default constructor.		

#include<iostream>
#include<fstream>
using namespace std;

class Student{
private:
	string name;
	int roll;
	string branch;
public:
	Student(){};
	Student(string n,int r,string b){
		name=n;
		roll=r;
		branch=b;
	}
	friend ofstream & operator<<(ofstream &ofs,Student &s);
	friend ifstream & operator>>(ifstream &ifs,Student &s);
	friend ostream & operator<<(ostream &os,Student &s);
};
ofstream & operator<<(ofstream &ofs,Student &s){
	ofs<<s.name<<endl;
	ofs<<s.roll<<endl;
	ofs<<s.branch<<endl;
	return ofs;
}

ifstream & operator>>(ifstream &ifs,Student &s){
	ifs>>s.name>>s.roll>>s.branch;
	return ifs;
}


ostream & operator<<(ostream &os,Student &s){
	os<<"Name : "<<s.name<<endl;
	os<<"Roll : "<<s.roll<<endl;
	os<<"Branch : "<<s.branch<<endl;
	return os;
}

int main(){
	ofstream ofs("Student.txt");
	Student s1("John",12,"Cs");
	ofs << s1;
	Student s3("Kalu",1,"FA");
	ofs << s3;
	ofs.close();
	ifstream ifs("Student.txt");
	
	ifs >> s1;
	cout<<s1;
	ifs >> s3;
	cout<<s3;
}