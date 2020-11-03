// Lab_04_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a;
	cout << "Podaj liczbe: ";
	cin >> a;

	vector<string> gray = { "0" , "1"};
	vector<string> gray2 = gray;

	for (int j = 0; j < a-1; j++) {

		vector<string> gray2 = gray;
		reverse(gray2.begin(), gray2.end());

		for (int i = 0; i < gray.size(); i++) {
			gray[i] = '0' + gray[i];
			gray2[i] = '1' + gray2[i];
		}

		for (string a : gray2) {
			gray.push_back(a);
		}

	};
	
	
	

	for (string a : gray) cout << endl << a;

}

