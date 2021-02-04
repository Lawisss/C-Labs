#include "PointType.h"

PointType::PointType() : x(0), y(0)
{

}

PointType::PointType(double x1, double y1) : x(x1), y(y1)
{

}

ostream& operator<<(ostream& output, const PointType& p)
{
	output << "*POINT\n\nPoint: (x = " << p.x << ",y = " << p.y << ")\n\n" << endl;
	return output;
}