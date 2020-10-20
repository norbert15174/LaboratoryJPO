// Lab03_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
using namespace std;

int main()
{

    char numbers[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    string text;
    cout << "Wprowadz tekst: ";
    cin >> text;
    int counter = 0;
    for (int i = 0; i < text.length(); i++) {
        for (int j = 0; j < 10; j++) {
            if (text[i] == numbers[j]) {
                counter++;
                break;
            }
        }
    }

    cout << endl << "ilosc cyfr: " << counter;

    return 0;

    
}

