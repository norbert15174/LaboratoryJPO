// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<vector<float>> initMatrix() {
	vector<vector<float>> matrix;
	int matrixSize;
	cout << "Enter matrix size: " << endl;
	cin >> matrixSize;
	float value;

	for (int i = 0; i < matrixSize; i++) {
		vector<float> rows;
		for (int j = 0; j < matrixSize; j++) {
			cin >> value;
			rows.push_back(value);
		}
		matrix.push_back(rows);
	}
	return matrix;
}

class Matrix {
private:
	vector<vector<float>> m_matrix;
public:
	Matrix(vector<vector<float>> matrix) : m_matrix{ matrix } {};
	void printMatrix() {
		for (vector<float> rows : m_matrix) {
			cout << endl;
			for (float value : rows)
				cout << value << " ";
		}
	};
	vector<vector<float>> getMatrix() { return m_matrix;};
	vector<vector<float>> sum(Matrix& m1, Matrix& m2);
	vector<vector<float>> mul(Matrix& m1, Matrix& m2);
};

vector<vector<float>> Matrix::sum(Matrix& m1,Matrix& m2){
	vector<vector<float>> m3;
	vector<vector<float>> m1_matrix = m1.m_matrix;
	vector<vector<float>> m2_matrix = m2.m_matrix;
	for (int i = 0; i < m1_matrix.size(); i ++ ) {
		vector<float> m3_rows;
		for (int j = 0; j < m1_matrix.size(); j++) {
			m3_rows.push_back(m1_matrix.at(i).at(j) + m2_matrix.at(i).at(j));
		}
		m3.push_back(m3_rows);
	}
	return m3;
}
vector<vector<float>> Matrix::mul(Matrix& m1, Matrix& m2) {
	vector<vector<float>> m3;
	vector<vector<float>> m1_matrix = m1.m_matrix;
	vector<vector<float>> m2_matrix = m2.m_matrix;
	for (int i = 0; i < m1_matrix.size(); i++) {
		vector<float> m3_rows;
		for (int j = 0; j < m1_matrix.size(); j++) {
			float value = 0;
			for (int k = 0; k < m1_matrix.size(); k++) {
				value += (m1_matrix.at(i).at(k) * m2_matrix.at(j).at(k));
			}
			m3_rows.push_back(value);
		}
		m3.push_back(m3_rows);
	}
	return m3;
}

int main()
{
	Matrix matrix1(initMatrix());
	Matrix matrix2(initMatrix());
	cout << endl << endl << endl;
	matrix1.printMatrix();
	cout << endl << endl << endl;
	matrix2.printMatrix();
	cout << endl << endl << endl;
	

	Matrix matrix3(matrix1.sum(matrix1, matrix2));
	matrix3.printMatrix();
	cout << endl << endl;
	Matrix matrix4(matrix1.mul(matrix1, matrix2));
	matrix4.printMatrix();
	

		


}


