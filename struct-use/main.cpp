#include <bits/stdc++.h>

using namespace std;

struct car{
    char model[20];
    int year;
    int ID;
}mycar, cars[1000];

void printingCar(car variableCar){
 cout<<variableCar.model<<endl;
 cout<<variableCar.ID<<endl;
 }


int main()
{
    strcpy(mycar.model,"Fast and Furious");
    mycar.year=2021;
    cout<<mycar.model[0]<<mycar.model[1]<<mycar.model[2]<<mycar.model[3]<<endl;
    cout<<mycar.year<<endl;

    for (int i=1; i<=100;++i) {
        cars[i].ID=i;
        strcpy(cars[i].model, "Fast and furious");
        cars[i].year=2022;
    }
    // print cars[13] and cars[37]
    printingCar(cars[13]);
    printingCar(cars[37]);
    return 0;
}
