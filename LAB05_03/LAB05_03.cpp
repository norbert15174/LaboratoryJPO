// LAB05_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <map>
using namespace std;
#include <string>

int main()
{
	
	map<string, string> mapa;
	for(int i=1;;i++) {
		string in;
		string linia = to_string(i);
		cout << endl << "Wprowadz kolejny wyraz z klawiatury: ";
		cin >> in;
		if (in == "end") break;
		if (mapa.count(in)) {
				mapa[in] += " " + linia;
		}else {
			mapa.insert(pair<string, string>(in, linia));
		}

	}

	for (pair<string, string> e : mapa) {
		cout << endl << e.first << "=>" << e.second;
	}

}
