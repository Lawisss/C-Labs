#include "CircleType.h"

CircleType::CircleType() : PointType(), radius(0)
{

}
CircleType::CircleType(double x1, double y1, double r1) : PointType(x1, y1), radius(r1)
{

}

double CircleType::circumference()
{
	return 2 * radius * 3.14159;
}

double CircleType::area()
{
	return 3.14159 * radius * radius;
}
ostream& operator<<(ostream& output, CircleType& c)
{
	output << "*CIRCLE\n\nPoint: (x = " << c.x << ",y = " << c.y << ")\nRadius: " << c.radius << "\nCircumference = " << c.circumference() << "\nArea = " << c.area() << "\n\n" << endl;
	return output;
}