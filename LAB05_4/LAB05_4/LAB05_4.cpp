// LAB05_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
using namespace std;
#include <string>
#include <fstream>

struct IPv4 {
	unsigned char o1;
	unsigned char o2;
	unsigned char o3;
	unsigned char o4;
};

int main()
{
	map<string,IPv4> mapa;
	fstream plik;
	plik.open("plik.txt", ios::in);//używamy metody open
	string domena;
	unsigned char ip0;
	unsigned char ip1;
	unsigned char ip2;
	unsigned char ip3;
	while (plik >> domena >> ip0 >> ip1 >> ip2 >> ip3)
	{
		IPv4 ip;
		ip.o1 = ip0;
		ip.o2 = ip1;
		ip.o1 = ip0;
		ip.o1 = ip0;
		mapa.insert(pair<string, IPv4>(domena, ip));
	}

	plik.close();
	

	for (pair<string, IPv4> e : mapa) cout << endl << e.first;

}