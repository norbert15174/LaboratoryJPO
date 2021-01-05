// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int findAllDigitInString(const string& text);
string stringReverse(const string& in);
void openAndSaveToFile();
bool isCyclicShift(string &first, string &second);
int findAllDigitInString(const string& text) {
    int num{ 0 };
    string digits = "0123456789";

    for (char character : text)
        for (char digit : digits)
            if (character == digit) num++;

    return num;

};

string stringReverse(const string& in) {
    string reversedIn;
    for (int i = in.length() - 1; i >= 0; i--) {
        reversedIn += in.at(i);
    }
    return reversedIn;
}

void openAndSaveToFile() {
    fstream file("C:\\Users\\Norbert\\source\\Lab_repos\\Learn\\3\\ConsoleApplication2\\text.txt");
    fstream fileToSave("C:\\Users\\Norbert\\source\\Lab_repos\\Learn\\3\\ConsoleApplication2\\text2.txt");
    string line;
    if (file.is_open()) {
        getline(file, line);
        file.close();
    }
    if (fileToSave.is_open()) {
        fileToSave << stringReverse(line);
        fileToSave.close();
    }
}

bool isCyclicShift(string& first, string& second) {

    if (first.length() != second.length()) return false;

    for (int i = 0; i < first.length();i++) {
        cout << first << endl;
        if (first == second) return true;
        string cpy = first.substr(0, first.length() - 1);
        first = first.at(first.length() - 1) + cpy;
    }
    return false;
};

int main()
{
}


