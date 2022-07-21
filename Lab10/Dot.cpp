#include "Dot.h"
#include <math.h>

Dot::Dot() : x(0), y(0) {}
Dot::Dot(double x1, double y1) : x(x1), y(y1) {}
double Dot::distanceTo(Dot p)
{
	return sqrt(pow((p.x - x), 2) + pow((p.y - y),2));
}