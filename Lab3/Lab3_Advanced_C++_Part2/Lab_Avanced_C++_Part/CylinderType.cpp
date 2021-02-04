#include "CylinderType.h"

CylinderType::CylinderType() : CircleType(), height(0)
{

}

CylinderType::CylinderType(double x1, double y1, double r1, double h1) : CircleType(x1, y1, r1), height(h1)
{

}

double CylinderType::volume()
{
	double area = this -> area();
	double volume = area * height;
	return volume;
}

double CylinderType::surface()
{
	double area = this -> area();
	double circ = this -> circumference();
	double surface = circ * height + 2 * area;
	return surface;
}
ostream& operator<<(ostream& output, CylinderType& c)
{
	output << "*CYLINDER\n\nPoint: (x = " << c.x << ",y = " << c.y << ")\nHeight: " << c.height << "\nCircumference = " << c.circumference() << "\nArea = " << c.area() << "\nVolume = " << c.volume() << "\nSurface = " << c.surface() <<"\n\n" << endl;
	return output;
}