#pragma once
#include <iostream>

class Circle
{
    double radius;

public:
    void setRadius(double r);
    double getRadius();

    double getDiameter() const;
    double getArea() const;

    friend bool operator==(const Circle& c1, const Circle& c2);
    bool operator>(const Circle& c1) const;

    Circle& operator+=(double cm);
    Circle& operator-=(double cm);

    friend std::ostream& operator<<(std::ostream& out, const Circle& c);

    Circle();
    Circle(double r);
    Circle(Circle& obj);
    ~Circle();
};

