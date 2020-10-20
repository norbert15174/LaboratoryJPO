// LAB03_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
    string linia;
    fstream plik;
    double *waluta = new double[3];
    double in;
    int option;
 

    cout << "Podaj kwote: ";
    cin >> in;
    cout << endl << "Podaj walute: " << endl << "1 USD" << endl << "2 EUR" << endl << "3 PLN" << endl;
    cin >> option;


    plik.open("waluta.txt", ios::in);
    if (plik.good() == true)
    {
        for(int i=0; i<3 ;i++)
        {
            getline(plik, linia);
            waluta[i] = stod(linia);
        }
        plik.close();
    }

    switch (option) {
    case 1:
        for (int i = 0; i < 3; i++) {
            cout << endl << "Kupno: " << (in * waluta[0] / waluta[i]) << "\t Sprzedaz: " << (1.05 * in * (waluta[0] / waluta[i]));
        }
        break;
    case 2:
        for (int i = 0; i < 3; i++) {
            cout << endl << "Kupno: " << (in * waluta[1] / waluta[i]) << "\t Sprzedaz: " << (1.05 * in * (waluta[1] / waluta[i]));
        }
        break;
    case 3:
        for (int i = 0; i < 3; i++) {
            cout << endl << "Kupno: " << (in * waluta[2] / waluta[i]) << "\t Sprzedaz: " << (1.05 * in * (waluta[2] / waluta[i]));
        }
        break;
    default: 
        return 0;
        break;
    };
    cout << endl;



    system("PAUSE");
    return(0);
}

