# include <bits/stdc++.h>
using namespace std;

/*   Format
struct [structure tag]
{
   member definition;
   member definition;
   ...
   member definition;
} [one or more structure variables](optional);
*/

struct Books{               // Books act as the datatype for other
    char Title[20];
    char Author[20];
    int ID;
    float Price;
}book1;    //Global variable      //optional to write book1...now book1 is the variable of data type book

void printingBooks(Books variableBook){    //printingBooks is a func ...books is the datatype  variableBooks is the variable
    cout<<variableBook.Author<<"\n";
    cout<<"Title is: "<<variableBook.Title<<"\n";
    cout<<variableBook.ID<<"\n";
    cout<<variableBook.Price<<"\n";
}
int main()
{   //Books book1;  //we can also declare it like this if we dont want to write in global variable
    // to accesss any member of the structure we must use member operator i.e. Dot or .
    book1.ID=11;
    book1.Price=12.60;
    strcpy(book1.Title,"Data Structure");
    strcpy(book1.Author,"Madaan");

    printingBooks(book1);
    /*cout<<book1.Title<<endl;
    cout<<book1.Author<<endl;
    cout<<book1.ID<<endl;
    cout<<book1.Price<<endl;
    */
    Books book2;  //local variable  here Books act as the data type like int , char , float
    book2.ID=120;
    cout<<book2.ID<<endl;
    return 0;
}
