#include "Circle.h"
#include <iostream>

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::getRadius() {
    return radius;
}

double Circle::getArea() const {
    return 3.14159265359 * radius * radius;
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
    return *this;
}


Circle& Circle::operator-=(double cm) {
    radius -= cm;
    if (radius < 0)
        radius = 0;
    return *this;
}


Circle::Circle() : Circle(0) {}

Circle::Circle(double r) : radius{ r } {}

Circle::Circle(Circle& obj) {
    radius = obj.radius;
}


std::ostream& operator<<(std::ostream& out, const Circle& c) {
    out << "diameter: " << c.getDiameter()
        << " radius: " << c.radius
        << " area: " << c.getArea();
    return out;
}

Circle::~Circle() {
    std::cout << "destructed" << std::endl;
}