#include <bits/stdc++.h>

using namespace std;

struct Student{
    int ID,year;
    char name[20];

    Student(){           //constructor name same as of classs
        ID=0,year=0;     //program m sbse phle constructor call hoga in line 22 it will cal constructor first through line 5.

        // memset (array_name, 0, sizeof(array_name));
        memset (name, 0, sizeof(name));  // memset is used to give char = null value ..becoz in local variable it will
                                        //randomly assign value .. 0means null her ... name is the array name from Student.
    }
}student1;   //global variable
int main()
{
    cout<<student1.ID<<" "<<student1.year<<" "<<student1.name<<endl;
    //initially global variable have a value of int ,float,double=0   and char =null i.e. it will cout nothing

    Student student2; //local variable  -- so it will be initialized with random id or we can say garbage value
    cout<<student2.ID<<endl;

    return 0;
}
