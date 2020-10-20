// Lab03_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
string string_reverse(const string& in) {
    string copy_in = in;
    for (int i = 0; i < in.length(); i++) {
        copy_in[i] = in[in.length() - i - 1];
    }
    return copy_in;
}

int main()
{
    string linia;
    fstream plik;

    plik.open("plik.txt", ios::in);
    if (plik.good() == true)
    {

            getline(plik, linia);
            
        plik.close();
    }
    cout << string_reverse(linia)<< endl; //wyświetlenie linii
    return(0);
}


