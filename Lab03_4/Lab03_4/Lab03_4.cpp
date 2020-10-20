// Lab03_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;




int main()
{
    string a,b;
    cout << "Podaj 1 ciag: ";
    cin >> a;
    cout <<endl<< "Podaj 2 ciag: ";
    cin >> b;

    if (a.length() == b.length()) {
        for (int i = 0; i < b.length(); i++) {
            if (a == b) {
                cout << endl << "Ciagi sa cykliczne" << endl;
                break;
            }
            else {              
                a = a[a.length() - 1 ] + a;
                a.erase(a.length() - 1,1);
            }
        }
        cout << endl << "Ciagi nie sa cykliczne"<< endl;
    }
    else {
        cout << endl << "Ciagi nie sa cykliczne" << endl;
    }
    return 0;
}


