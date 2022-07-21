
#pragma once

using namespace std;
class Point
{
public:
	Point() {}
	Point(int x, int y) : x(x), y(y) {}

	Point& operator+(const Point& point1) {
		Point sumPoints;
		sumPoints.x = point1.x + x;
		sumPoints.y = point1.y + y;
		return sumPoints;
	}

	Point& operator+(const int n) {
		Point sumPoints;
		sumPoints.x = n + x;
		sumPoints.y = n + y;
		return sumPoints;
	}

	Point& operator+=(const Point& point1) {
		x += point1.x;
		y += point1.y;
		return *this;
	}

	int PrintX()
	{
		return x;
	}
	int PrintY()
	{
		return y;
	}
private:
	int x;
	int y;
};

