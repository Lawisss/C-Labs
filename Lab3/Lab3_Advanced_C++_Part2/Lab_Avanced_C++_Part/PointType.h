#include <iostream>

using namespace std;

#pragma once
class PointType
{
protected:
	double x;
	double y;
public:
	PointType();
	PointType(double x, double y);
	friend ostream& operator<<(ostream& output, const PointType& p);
};

