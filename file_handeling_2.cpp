#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream in;
	in.open("my.txt");       // File ka naam
	if(!in.is_open()){cout<<"File doesn't exist "<<endl;}    // also write as if(!in){cout<<"I m opened "<<endl;}
	string name;				// if file doesn't exist only then it will show that msg. -> if exist simply output will come on screen
	int roll;
	string relation;
	in>>name>>roll>>relation;
	in.close();    // it is necessary to close at last
	cout<<name<<endl<<roll<<endl<<relation;   
}

//Note: you must know the proper order of datatypes.