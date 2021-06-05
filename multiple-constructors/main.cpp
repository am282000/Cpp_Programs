#include <bits/stdc++.h>

using namespace std;

struct product{
    double price;
    char name[20];

    product(){               //no arguement
        price=0;
        memset(name,0,sizeof(name));
    }
    product(double newPrice){          //agar double type ka kisi or naam se constructor bnaoge to error aa jayega
        price=newPrice;
    }
    product(int newPrice){
        price=newPrice+10;
    }
    product(char newName[],double newPrice){
        price=newPrice;
        memset(name,0,sizeof(name));
        strcpy(name,newName);
    }
}F(9.0);  //global variable so it will return name =null.
//we can call a single coontsaructor at a time

int main()
{
    product A;    //non arguenmenet vala constructor hi call krega
    cout<<A.price<<endl;

    product B(4.5);
    cout<<B.price<<endl;

    product C(7);
    cout<<C.price<<endl;

    product D("apple",2.5);
    cout<<D.name<<" "<<D.price<<endl;

    product E(3.8);
    cout<<E.name<<endl;  // coz 2 nd constructor is local variable  so it will give random value.

    cout<<F.name<<endl;  //print ho rha h but null h
    return 0;
}
