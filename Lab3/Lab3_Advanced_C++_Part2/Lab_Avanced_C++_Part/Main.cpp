#include "circleType.h"
#include "cylinderType.h"
#include "pointType.h"

int main() {

	PointType point(2, 2);
	CircleType circle(3, 4, 5);
	CylinderType cylinder(2, 1, 3, 5);

	cout << point;
	cout << circle;
	cout << cylinder;

	string end;
	cin >> end; //for .exe (to keep the window open)

	return 0;
}