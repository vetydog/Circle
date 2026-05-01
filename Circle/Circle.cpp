#include "Circle.h"

void Circle::setRadius(double r) {
	radius = r;
}

double Circle::getRadius() {
	return radius;
}

double Circle::getArea() const {
	return PI * radius * radius;
}

double Circle::getDiameter() const {
	return 2 * radius;
}
bool operator==(const Circle& c1, const Circle& c2) {
	return c1.radius == c2.radius;
}

bool Circle::operator>(const Circle& c1) const {
	return this->radius > c1.radius;
}

Circle& Circle::operator+=(double cm) {
	radius += cm;
	area = PI * radius * radius;
	diameter = radius * 2;
	return *this;
}

Circle& Circle::operator-=(double cm) {
	radius -= cm;
	area = PI * radius * radius;
	diameter = radius * 2;
	return *this;
}

Circle::Circle() : Circle(0) {}

Circle::Circle(double r) : radius{ r } {
	area = PI * radius * radius;
	diameter = radius * 2;
}

ostream& operator<<(ostream& out, const Circle& c) {
	out << "diameter: " << c.diameter << " " << "radius: " << c.radius << " " << "area: " << c.area << endl;
	return out;
}

Circle::Circle(Circle& obj) {
	radius = obj.radius;
	diameter = obj.diameter;
	area = obj.area;
}

Circle::~Circle() {
	cout << "destructed" << endl;;
}