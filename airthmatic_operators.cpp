#include<iostream>
#include<math.h>
using namespace std;

//area of circle

/*
int main(){
	float r,area;      
	cout<<"enter radius ";
	cin>>r;
//	area=3.14f*r*r;
//	area=22/7*r*r;
//	area=22/7.0*r*r;
//	area=22.0/7*r*r;
	area=(float)22/7*r*r;
	cout<<"Area of circle is = "<<area;
}

*/

//quadratic equation


int main(){
	int a,b,c;
	float root1,root2;
	cout<<"for finding your quadratic solution:"<<endl;
	cout<<"Enter a ";
	cin>>a;
	cout<<"Enter b ";
	cin>>b;
	cout<<"Enter c ";
	cin>>c;
	
	root1= (-b+sqrt(b*b-4*a*c))/(2*a);
	root2= (-b-sqrt(b*b-4*a*c))/(2*a);
	cout<<"Quadratic Solution is="<<root1<<" "<<root2<<endl;
	return 0;
}



//operator

/*
int main()
{
int sum=10,x=50;
sum+=x;
cout<<sum<<endl;
int fact=10,y=5;
fact*=y;
cout<<fact<<endl;
return 0;
}
*/

//velocity

/*
int main(){
	int u,v,a;
	float speed;
	cout<<"enter 3 no";
	cin>>u>>v>>a;
	speed=(u*u-v*v)/(2*a);
	cout<<"speed is "<<speed<<"km/h";
}

*/
