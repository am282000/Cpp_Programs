#include<iostream>
using namespace std;
	
class asample
{
	int a[5];
	public:
		void getdata();
		int display();
		int asum();
};

void asample ::getdata()
{
	cout<<"enter elements";
	for(int i=0;i<5;i++)
	{
	
		cin>>a[i];
		
	}
}

int asample ::display()
{
	cout<<"array elements are =";
	for(int i=0;i<5;i++)
	{
		cout<<"\n"<<a[i];
	}
}

int asample :: asum()
{
	int sum=0;
	for(int i=0;i<5;i++)
	{
		 sum=sum+a[i];
	}
	cout<<"sum is"<<sum;
}

int main()
{
	asample s;
	s.getdata();
	s.display();
	s.asum();
}
