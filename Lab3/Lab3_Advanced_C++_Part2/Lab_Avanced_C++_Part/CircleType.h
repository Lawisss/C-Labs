#include "PointType.h"

#pragma once
class CircleType : public PointType
{
private:
	double radius;
public:
	CircleType();
	CircleType(double x1, double y1, double r1);
	double circumference();
	double area();
	friend ostream& operator<<(ostream& output, CircleType& c);
};

