// LAB04_2_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<double> sum(const vector<double> &v1, const vector<double> &v2) {
    vector<double> v3;
    if (v1.size() > v2.size()) {
        v3 = v1;
        for (int i = 0; i < v2.size(); i++) v3[i] += v2[i];
    }
    else {
        v3 = v2;
        for (int i = 0; i < v1.size(); i++) v3[i] += v1[i];
    }

    return v3;
};

int main()
{
    vector<double> v1;
    vector<double> v2;


    for(int i=0;i<rand();i++) v1.push_back(rand());
    for (int i = 0; i < rand(); i++) v2.push_back(rand());

    vector<double> v3 = sum(v1,v2);
    cout << endl << endl;
    for(double a: v1) cout << ' ' << a;
    cout << endl << endl;
    for (double a : v2) cout << ' ' << a;
    cout << endl << endl;
    for (double a : v3) cout << ' ' << a;
    cout << endl << endl;
}
