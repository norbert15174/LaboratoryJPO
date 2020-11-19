// LAB07_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class StaticArray {
    unsigned int tab[16];
public:
    StaticArray() {
        for (int i; i < 16; i++) tab[i] = 0;
    }
    unsigned int& at(int index) {
        try
        {
            if (index > 15 || index < 0) throw InvalidValue::what();
            return tab[index];
        }
        catch (const char* ex) {

            cout << endl << ex;
            return tab[0];
        }
        
    }

    void set_item(int index, int value) {

        try
        {
            if (index > 15 || index < 0) throw InvalidValue::what();
            if (value < 0) throw InvalidIndex::what();
            tab[index] = value;
        }
        catch (const char* ex) {
        
            cout << endl << ex;
        
        }


    }


};

class InvalidIndex {
public:
    static const char* what() {
    
        return "Invalid Index of tab";
    
    }
};

class InvalidValue {
public:
    static const char* what() {

        return "Invalid Value of tab";

    }
};


int main()
{
    StaticArray staticArray = StaticArray();
    staticArray.at(18);
    staticArray.set_item(5, -10);
}

