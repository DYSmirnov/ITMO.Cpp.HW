#pragma once
class Dot
{
private:
	double x;
	double y;
public:
	Dot();
	Dot(double, double);
	double distanceTo(Dot point);
};

