// LAB06_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

    string rekur(string text, int size) {


        cout << text[size-1];
    if (size == 1) return "end";

    return rekur(text,--size);



}


int main()
{
    string text;
    cin >> text;
    rekur(text, text.length());
}
