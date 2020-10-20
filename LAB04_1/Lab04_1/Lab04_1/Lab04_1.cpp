// Lab04_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    vector<string> vectorOfElements;
    vectorOfElements.push_back("wino");
    vectorOfElements.push_back("buraki");
    vectorOfElements.push_back("banany");
    vectorOfElements.push_back("cukier");
    vectorOfElements.push_back("czekolada");
    vectorOfElements.push_back("marchew");

    cout << vectorOfElements.at(vectorOfElements.size() - 1) << endl;
    vectorOfElements.pop_back();

    for (string find : vectorOfElements) {
        cout << find << endl;
    }

    vectorOfElements.insert(vectorOfElements.begin()+3 , "kawa");

    for (string find : vectorOfElements) {
        cout << find << endl;
    }

    for (int i = 0; i < vectorOfElements.size(); i++) if (vectorOfElements[i] == "cukier") vectorOfElements[i] = "cukierek";

    for (string find : vectorOfElements) {
        cout << find << endl;
    }

    for (int i = 0; i < vectorOfElements.size(); i++) if (vectorOfElements[i] == "czekolada") vectorOfElements.erase(vectorOfElements.begin()+i);

    for (string find : vectorOfElements) {
        cout << find << endl;
    }

    sort(vectorOfElements.begin(), vectorOfElements.end(), [](string i, string j) {return (i < j); });

    for (string find : vectorOfElements) {
        cout << find << endl;
    }


}


