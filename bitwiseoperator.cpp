#include <iostream>
using namespace std;
int main()
{
int a=11,b=7,c;
c=a&b;  //covert in binary no.   in & 1+1=1 all other 0
cout<<c<<endl;
int d=11,e=7,f;
f=d|e;   //covert in binary no.   in | 0+0=0 all other 1
cout<<f<<endl;
int g=11,h=7,i;
i=g^h;  //covert in binary no.   in ^ xor same same =0 different different=1
cout<<i<<endl;
char j=5,k;
k=j<<1;  //covert in binary no.   in left shift .. shift the no in 1 left and add 0 at last ..thn convert back it into decimal no.
 // basically x<<i  results x*2 ki power i is the answer.
cout<<(int)k<<endl;
char l=20,m;
m=l>>1;   //covert in binary no.   in right shift . // basically x>>i  results x/2 ki power i is the answer.
cout<<(int)m<<endl;
char x=5,y;
y= ~ x;    //in not step1- 0 ka 1 or 1 ki 0 .... in 8 bits 1st bit is signed ...if 0=+  ,1=-  .... 
// if answer come negative ... find 2's compliment ... step 1 ko vapis se 0 ka 1 and 1 ka 0 . than +1  in last bit .
// so here 1+1=0 and 1 carry and 1+0 =1 and 0+0=0. than convert it in decimal no . with a negative sign.
cout<<(int)y<<endl;
return 0;
}
