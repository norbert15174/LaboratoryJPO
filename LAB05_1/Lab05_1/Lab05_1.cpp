// Lab05_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
using namespace std;


int main()
{
    map<string, int> phoneBook;
    while (true) {
        string imie;
        cout << endl << "Podaj imie: ";
        cin >> imie;
        if (imie == "exit") break;
        if (phoneBook.count(imie)){
            cout << "numer telefonu to: " << phoneBook[imie];
        }
        else {
            int phone = 0;
            cout << endl << "Podaj Numer Telefonu: ";
            cin >> phone;
            phoneBook.insert(pair<string,int>(imie, phone));
            
        }

    }
}
