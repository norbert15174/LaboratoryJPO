// LAB01_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
    string text = "Congratulations Mrs. <name>, youand Mr. <name> are the lucky recipients of a trip for two to XXXXXXXXXXXX.Your trip to XXX is already scheduled ";
    int b;
    while (true) {
        b = text.find("<name>");
        if (b == -1) {
            break;
        }else {
            text.replace(b, 6, "Smith");
        }
    }
    
    while (true) {
        b = text.find("X");
        int count = 1;
        while (true) {
            if (text[b + count] == 'X') {
                count++;
            }
            else {
                break;
            }
        }
        if (b == -1) {
            break;
        }
        else {
            text.replace(b, count, "Siberia");
        }
    }

    b = text.find("lucky");
    text.insert(b, "un");
    text.insert(text.length(), "In December");
  

    cout << endl << text << endl;


    return 0;
}


