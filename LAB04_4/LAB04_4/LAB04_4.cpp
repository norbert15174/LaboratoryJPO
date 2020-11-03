// LAB04_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<vector<double>> sum(vector<vector<double>>& matrix, vector<vector<double>>& matrix2) {
	vector<vector<double>> matrix3 = matrix;
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[0].size(); j++) {
			matrix3[i][j] += matrix2[i][j];
		}
	}
	return matrix3;
}

vector<vector<double>> mul(vector<vector<double>>& matrix, vector<vector<double>>& matrix2) {
	vector<vector<double>> matrix3 = matrix;
	for (int i = 0; i < 10; i++) {
		double a;
		for (int j = 0; j < 10; j++)
		{
			a = matrix[i][j] * matrix2[j][i];
		}

	}
}

int main()
{
	vector<vector<double>> matrix(10,vector<double>(10,0));
	vector<vector<double>> matrix2(10,vector<double>(10,0));

	for (int i = 0; i < 10; i++) {
		
		for (int j = 0; j < 10; j++) {
			matrix[i][j]=rand();
			matrix2[i][j] = rand();

		}
	}

	vector<vector<double>> matrix3 = sum(matrix, matrix2);

	for (int i = 0; i < 10; i++) {
		cout << endl;
		for (int j = 0; j < 10; j++) {
			cout << matrix3[i][j] << "\t";

		}
	}

}


