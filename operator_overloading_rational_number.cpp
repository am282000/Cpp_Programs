
#include<iostream>
using namespace std;

class Rational{
    int p;
    int q;
public:
    Rational(){
        p=1;
        q=1;
    }
    Rational(int p,int q){
        this->p=p;
        this->q=q;
    }
    Rational(Rational &r){
        this->p=r.p;
        this->q=r.q;
    }
    int getP(int p){
        return p;
    }
    int getQ(int q){
        return q;
    }
    void setP(){
        this->p=p;
    }
    void setQ(){
        this->q=q;
    }
    Rational operator+(Rational r){       // ni aayega smj => check ss with same name.
        Rational t;    // let t=toal or final p
        t.p=(this->p * r.q) + ( this->q * r.p );
        t.q=this->q * r.q;
        return t;
    }

     friend ostream & operator<<(ostream &os, Rational &rat);
};

ostream & operator<<(ostream &os, Rational &rat){
    os<<rat.p<<"/"<<rat.q;
    return os;
}

int main(){
    Rational r1(2,3),r2(4,5),r3;
    r3=r1+r2;
    //r3=operator+(r1,r2)     // we can't use this becoz in overloaded function we passed only 1 parameter nd here we are giving 2
    cout<<"Sum of "<<r1<<" and "<<r2<<" is : "<<r3<<endl;
}
