// object as a func arguement

#include<iostream>
using namespace std;
class weight

{

	int kg;
    int gm;

	public:
		int getdata();
		int showdata();
		int adddata(weight w1,weight w2);
};

int weight :: getdata()
{
	cout<<"enter kg =";
	cin>>kg;
	cout<<"enter gm =";
	cin>>gm;
}

int weight :: showdata()
{
	cout<<"value of kg ="<<kg<<endl;
	cout<<"value of gm ="<<gm<<endl;
}

int weight :: adddata(weight w1,weight w2)
{
   	gm=w1.gm+w2.gm;
	kg=gm/1000;
	gm=gm%1000;
	kg=kg+w1.kg+w2.kg;
}

int main()
{
	weight w1,w2,w3;
	w1.getdata();
	w2.getdata();
	w3.adddata(w1,w2);
	w1.showdata();
	w2.showdata();
	w3.showdata();
}
