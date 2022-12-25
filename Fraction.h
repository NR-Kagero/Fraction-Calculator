#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class Fraction
{
private:
    int num1,num2;
    string Fversion;
    float result;
public:
    Fraction();
    Fraction(int num1,int num2);
    Fraction(string s);
    void setFversion(string s);
    string getFversion();
    float getResult();
    int devisable(int &n1,int &n2);
    void convertStoI(string s);
    void convertItoS(int num1,int num2);
    Fraction operator+(Fraction F1);
    Fraction operator-(Fraction F1);
    Fraction operator/(Fraction F1);
    Fraction operator*(Fraction F1);
    Fraction& operator=(const Fraction& temp);
    bool operator ==(Fraction F1);
    bool operator >=(Fraction F1);
    bool operator <=(Fraction F1);
    bool operator !=(Fraction F1);
    bool operator <(Fraction F1);
    bool operator >(Fraction F1);
    void print();
    friend ostream& operator<<(ostream& out,Fraction& F1);
    friend istream& operator>>(istream& in,Fraction& F1);
};
#endif
