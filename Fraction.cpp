#include "Fraction.h"
#include <iostream>
#include <cmath>
using namespace std;

Fraction :: Fraction()
{
    num1=0;
    num2=0;
}

Fraction::Fraction(int num1,int num2)
{
    devisable(num1,num2);
    convertItoS(num1,num2);
}

float Fraction::getResult(){
    return result;
}

Fraction::Fraction(string s)
{
    convertStoI(s);
    devisable(num1,num2);
    convertStoI(s);
}

void Fraction:: setFversion(string s){
    Fversion=s;
    convertStoI(Fversion);
    devisable(num1,num2);
    convertItoS(num1,num2);
}

string Fraction:: getFversion(){
    return Fversion;
}

int Fraction::devisable(int &n1,int &n2)
{
    int N1=abs(n1),N2=abs(n2),N3=1;
    for(int i=1; i<=(N1<N2?N1:N2); i++)
    {
        if(N1%i==0&&N2%i==0)
        {
            N3=i;
        }
        else
        {
            continue;
        }
    }
    n1=n1/N3;
    n2=n2/N3;
    return N3;
}

void Fraction::convertStoI(string s)
{
    num1=stoi(s.substr(0,s.find('/')));
    num2=stoi(s.substr(s.find('/')+1,s.length()-1));
    Fversion=s;
    result=float(num1)/num2;
}

void Fraction::convertItoS(int num1,int num2)
{
    this->num1=num1;
    this->num2=num2;
    Fversion=to_string(num1)+'/'+to_string(num2);
    result=float(num1)/num2;
}

void Fraction::print()
{
    devisable(num1,num2);
    convertItoS(num1,num2);
    cout<<"num1="<<num1<<endl
        <<"num2="<<num2<<endl
        <<"Fversion : "<<Fversion<<endl
        <<"result="<<result<<endl;
}

Fraction Fraction::operator+(Fraction F)
{
    Fraction f;
    f.num1=(num1*F.num2)+(num2*F.num1);
    f.num2=num2*F.num2;
    devisable(f.num1,f.num2);
    f.convertItoS(f.num1,f.num2);
    f.result=float(f.num1)/f.num2;
    return f;
}

Fraction Fraction::operator-(Fraction F)
{
    Fraction f;
    f.num1=(num1*F.num2)-(num2*F.num1);
    f.num2=num2*F.num2;
    devisable(f.num1,f.num2);
    f.convertItoS(f.num1,f.num2);
    f.result=float(f.num1)/f.num2;
    return f;
}

Fraction Fraction::operator/(Fraction F)
{
    Fraction f;
    f.num1=num1*F.num2;
    f.num2=num2*F.num1;
    devisable(f.num1,f.num2);
    f.convertItoS(f.num1,f.num2);
    f.result=float(f.num1)/f.num2;
    return f;
}

Fraction Fraction::operator*(Fraction F)
{
    Fraction f;
    f.num1=num1*F.num1;
    f.num2=num2*F.num2;
    devisable(f.num1,f.num2);
    f.convertItoS(f.num1,f.num2);
    f.result=float(f.num1)/f.num2;
    return f;
}

Fraction& Fraction::operator=(const Fraction& temp){
    num1=temp.num1;
    num2=temp.num2;
    Fversion=temp.Fversion;
    result=temp.result;
    return *this;
}

bool Fraction::operator ==(Fraction F1){
    if(num1==F1.num1&&num2==F1.num2){
        return true;
    }
    else{return false;}
}

bool Fraction::operator >=(Fraction F1){
    if(result>=F1.result){
        return true;
    }
    else{return false;}
}

bool Fraction::operator <=(Fraction F1){
    if(result<=F1.result){
        return true;
    }
    else{return false;}
}

bool Fraction::operator !=(Fraction F1){
    if(result!=F1.result){
        return true;
    }
    else{return false;}
}

bool Fraction::operator >(Fraction F1){
    if(result>F1.result){
        return true;
    }
    else{return false;}
}

bool Fraction::operator <(Fraction F1){
    if(result<F1.result){
        return true;
    }
    else{return false;}
}

ostream& operator<<(ostream& out,Fraction& F1){
    out<<F1.Fversion;
    return out;
}

istream& operator>>(istream& in,Fraction& F1){
    string S;
    in>>S;
    F1.setFversion(S);
    return in;
}
