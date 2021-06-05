#include<bits/stdc++.h>

using namespace std;

struct Car{
    int speed,price;
}cars[100];

bool cmp(Car A ,Car B){
    if(A.speed!=B.speed)
        return A.speed>B.speed;
    else
        return A.price<B.price;

    //higher speed per price ratio

   // return (1.0*A.speed/A.price)>(1.0*B.speed/B.price);  //int divided by int results into an int so convert it in double
}

int main(){
    cars[1].speed=100; cars[1].price=50;
    cars[2].speed=200; cars[2].price=147;
    cars[3].speed=200; cars[3].price=153;
    cars[4].speed=132; cars[4].price=344;
    cars[5].speed=97;  cars[5].price=45;
    cars[6].speed=97;  cars[6].price=89;

    sort(cars+1,cars+7,cmp);

    for(int i=1;i<=6;++i)
    cout<<cars[i].speed<<" "<<cars[i].price<<endl;

    return 0;
}
