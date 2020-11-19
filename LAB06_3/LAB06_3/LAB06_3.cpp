// LAB06_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isPrime(int number, int p) {
    if (p == 1) return true;
    bool check = number % p == 0;

    if (check) {
        return false;
    }else {
        isPrime(number, --p);
    }



}

int main()
{
    int num;
    cin >> num;
    
    cout << isPrime(num, num - 1);
}


