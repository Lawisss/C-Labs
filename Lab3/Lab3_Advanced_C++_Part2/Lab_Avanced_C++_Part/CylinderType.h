#include "CircleType.h"

#pragma once
class CylinderType : public CircleType
{
private:
	double height;
public:
	CylinderType();
	CylinderType(double x, double y, double radius, double height);
	double volume();
	double surface();
	friend ostream& operator<<(ostream& output, CylinderType& c);
};

