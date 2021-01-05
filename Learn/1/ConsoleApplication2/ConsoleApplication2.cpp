// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
int findTheValue(long long int &a);

int findTheValue(long long int& a) {

	if (a % 2 == 0) return a >> 1;
	for (long long int i = 3; i < a; i += 2)
		if (a % i == 0) return a / i;
	return 0;

};


#include <iostream>
using namespace std;
int main()
{
	long long int a;
	cout << "Enter the value of a:";
	cin >> a;
	cout << findTheValue(a);

	
}

