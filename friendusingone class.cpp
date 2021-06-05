#include<iostream>
using namespace std;

class sample
{
	int a,b;
	public:
		int getdata();
		friend float mean(sample);
};

int sample::getdata()
{
	cout<<"enter two no";
	cin>>a>>b;
}

float mean(sample s) //object create yhi kreinge
{
	return (s.a+s.b)/2.0;
}

int main()
{
	sample k;
	k.getdata();
	cout<<"the mean is ="<<mean(k);
}
