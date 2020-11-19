// LAB07_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

void rownanie(float &a, float b, float &c) {
    float delta = pow(b, 2) - 4 * a * c;
    try
    {
        if (delta < 0) throw "brak rozwiazan rzeczywistych";
        c = (-b + delta) / (2 * a);
        a = (-b - delta) / (2 * a);
    }
    catch (const char* ex) {
        cout << ex << endl;

        a = 0;
        c = 0;
    }
        
}


int main()
{
    float a, b, c;
    cout << "PODAJ WSPÓŁCZYNIK A: ";
    cin >> a;
    cout << endl << "PODAJ WSPÓŁCZYNIK B: ";
    cin >> b;
    cout << endl << "PODAJ WSPÓŁCZYNIK C: ";
    cin >> c;
    rownanie(a, b, c);
    cout << "x0: " << a << "\t";
    cout << "x1: " << c;
}


