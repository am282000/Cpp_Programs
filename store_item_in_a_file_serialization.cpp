#include<iostream>
#include<fstream>

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
	Item *list[n];
	cout<<"Enter All Items......."<<endl;
	for(int i=0;i<n;i++){
		cout<<"Enter "<<i+1<<" item Name , Price , Qty ";
		cin>>name>>price>>qty;
		list[i]=new Item(name,price,qty);
	}
	
	ofstream ofs("store_item.txt");
	for(int i=0;i<n;i++){
		ofs<<*list[i];
	}
	
	Item item;
	ifstream ifs("store_item.txt");
	for(int i=0;i<n;i++){
		ifs>>item;
		cout<<"Item "<<i+1<<endl<<item;
	}
}