// LAB05_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <map>
using namespace std;


int main()
{
	string in;
	map<char, int> mapa;
	cout << "PODAJ STRINGA: ";
	cin >> in;

	for (int i = 0; i < in.length(); i++) {
		if (mapa.count(in[i]) == 0) {
			mapa.insert(pair<char, int>(in[i], 0));
		}
		else {
			mapa[in[i]] += 1;
		}

	}

	for (pair<char,int> e: mapa) {
		
		cout << endl << e.first << ": " << e.second;

	}
}