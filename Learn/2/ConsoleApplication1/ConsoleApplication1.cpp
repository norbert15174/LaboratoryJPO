// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <math.h>
#include <random>
#include <chrono>
#include <vector>
#include <assert.h>
using namespace std;

void findThePIValue();

class Point2D {
private:
	double m_x;
	double m_y;
public:
	Point2D(const double& x = 0, const double& y = 0) : m_x{ x }, m_y{ y } {};
	void setX(const double& x) { m_x = x; };
	double getX() { return m_x; }
	void setY(const double& y) { m_y = y; };
	double getY() { return m_y; }
};

class Circle {
private:
	double m_x;
	double m_y;
	double m_r;
public:
	Circle(const double& x = 0, const double& y = 0, const double& r = 1) : m_x{ x }, m_y{ y }, m_r{ r } {};
	void setX(const double& x) { m_x = x; };
	double getX() { return m_x; }
	void setY(const double& y) { m_y = y; };
	double getY() { return m_y; }
	void setR(const double& r) { m_r = r; };
	double getR() { return m_r; }

	bool inInside(Point2D &point) {
		return sqrt(pow(point.getX() - m_x, 2) + pow(point.getY() - m_y, 2)) < m_r;
	};


};

class SmartArray {
private:
	vector<double> elements;
public:


	SmartArray(const int &num) {
		for (int i = 0; i < num; i++) elements.push_back(rand() * 100);
		cout << "Wartosc: " << endl;
		for (double element : elements) cout << element << endl;
	}
	SmartArray(SmartArray& smartArray) {
		elements = smartArray.getElements();
		cout << "Class has been copied" << endl;
		for (double element : elements) cout << element << endl;
	}

	~SmartArray(){ cout << "Element has been destroyed"; }

	vector<double> getElements() {
		return elements;
	}

	double atMethod(const int &index) {
		assert(index >= 0 && index < elements.size());
		return elements.at(index);
	}

	void setValueAtPosition(const int& index, const double& value) { elements.at(index) = value; }

	double findMaxValue() {
	
		double initValue = elements.at(0);
		for (double element : elements) if (initValue < element) initValue = element;
		return initValue;
	}

};


void findThePIValue() {
	mt19937 gen(chrono::system_clock::now().time_since_epoch().count());
	uniform_real_distribution<double> distribution{ -1.0,1.0 };
	Point2D points(0, 0);
	Circle circle(0, 0, 1);
	unsigned int num;
	cout << "Enter number of points: ";
	cin >> num;
	unsigned int hitedPoints{ 0 };
	for (int i = 0; i < num; i++)
	{
		points.setX(distribution(gen));
		points.setY(distribution(gen));
		if (circle.inInside(points))  hitedPoints++;
	}

	cout << endl << "The pi value is: " << 4 * (double)hitedPoints / num;
}

int main()
{
	SmartArray smartArray(20);
	cout << endl << smartArray.atMethod(2) << endl;

	cout << endl << smartArray.findMaxValue();

}

