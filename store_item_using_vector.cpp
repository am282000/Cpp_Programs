#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

class Item{
private:
	string name;
	float price;
	int qty;
public:
	Item(){};
	Item(string n,float p,int q){
		name=n;
		price=p;
		qty=q;
	}	
	friend ofstream & operator<<(ofstream &ofs,Item &i);
	friend ifstream & operator>>(ifstream &ifs,Item &i);
	friend ostream & operator<<(ostream &os,Item &i);
};

ofstream & operator<<(ofstream &ofs,Item &i){
	ofs<<i.name<<endl;
	ofs<<i.price<<endl;
	ofs<<i.qty<<endl;
	return ofs;
}

ifstream & operator>>(ifstream &ifs,Item &i){
	ifs>>i.name>>i.price>>i.qty;
	return ifs;
}

ostream & operator<<(ostream &os,Item &i){
	os<<"Name : "<<i.name<<endl;
	os<<"Price : "<<i.price<<endl;
	os<<"Qty : "<<i.qty<<endl;
	return os;
}

int main(){
	int n;
	string name;
	float price;
	int qty;
	cout<<"Enter no of items : ";
	cin>>n;
	vector <Item *> list;    // simply declared a vector with datatype classname pointer than made an object named list
	cout<<"Enter All Items......."<<endl;
	for(int i=0;i<n;i++){
		cout<<"Enter "<<i+1<<" item Name , Price , Qty ";
		cin>>name>>price>>qty;
		list.push_back(new Item(name,price,qty));   //list.push_back()  => push_back is coming from stl library
	}
	
	ofstream ofs("list.txt");
	vector<Item *> :: iterator itr;		// using iterator class
	for(itr=list.begin();itr!=list.end();itr++){    // begin() and end() is directing the program from where list is starting and ending
		ofs<<**itr;    //*itr value display krega ...why ** becoz our class is pointer type
	}
	
	Item item;
	ifstream ifs("list.txt");
	for(int i=0;i<n;i++){
		ifs>>item;
		cout<<"Item "<<i+1<<endl<<item;
	}
}