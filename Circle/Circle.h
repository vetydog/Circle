#pragma once
#include <iostream>
using namespace std;

class Circle
{
	double radius;
	double diameter;
	double area;
	const double PI = 3.14159265359;

public:
	void setRadius(double r);

	double getRadius();
	double getDiameter()const;
	double getArea()const;

	friend bool operator==(const Circle& c1, const Circle& c2);
	bool operator>(const Circle& c1) const;

	Circle& operator+=(double cm);
	Circle& operator-=(double cm);

	friend ostream& operator<<(ostream& out, const Circle& c);

	Circle();
	Circle(double r);
	Circle(Circle& obj);

	~Circle();
};

