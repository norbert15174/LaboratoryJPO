// LAB06_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Complex {
private:
    float real;
    float imag;
public:
    void setReal(float real){
        this->real = real;
    }
    void setImag(float real) {
        this->imag = imag;
    }
    float getReal() const {
        return this->real;
    }
    float getImag() const{
        return this->imag;
    }

    Complex(float real=0,float imag=0) {
        this->real = real;
        this->imag = imag;
    }

    Complex& operator= (const Complex& comp) {
        this->real = comp.real;
        this->imag = comp.imag;
        return *this;
    }

    Complex& operator++ () {
        real++;
        return *this;
    }

};

bool operator==(const Complex& comp, const Complex& comp2) {
    return (comp.getReal() == comp2.getReal() && comp.getImag() == comp2.getImag());
}

Complex operator+ (const Complex& comp,const Complex& comp2) {
    return Complex(comp.getReal() + comp2.getReal(), comp.getImag() + comp2.getImag());
}

istream& operator>> (istream& in, Complex& comp) {

    float inReal, inImag;
    in >> inReal >> inImag;
    comp.setReal(inReal);
    comp.setImag(inImag);
    return in;

};

ostream& operator<< (ostream& out, const Complex& comp) {

    out << comp.getReal() << "+" << comp.getImag() << "i";
    return out;

};

int main()
{
    Complex comp = Complex(2, 5);
    Complex comp2 = Complex(1, 6);

    comp = comp + comp2;
    cout << comp << endl;
    comp = comp2;
    cout << comp << endl;
 //   comp++;
    cout << comp << endl;



}

