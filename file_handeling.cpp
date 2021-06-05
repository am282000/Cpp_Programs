#include<iostream>
#include<fstream>   // filestream ki library
using namespace std;

int main(){								// writing trunc is optional ..It is already the default one
										//ios::app => append => if file existing keep the content and add the new content also .				
ofstream out("my.txt",ios::trunc);      // truncate => if file already existing delete all content inside it.
out<<"Madaan "<<endl;
out<<12<<endl;
out<<"Jingle"<<endl;

out.close();
}


//Note: ofstream is the build in oiutput libraby ... out (you can give any name) .. that is used to display the outside in my.txt file.
//If my.txt file is already created than it will truncate it automatically . else create a file of this name.