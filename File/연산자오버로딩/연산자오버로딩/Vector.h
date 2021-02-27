#pragma once
#include <iostream>

class Vector {
	friend std::ostream& operator<<(std::ostream& os, const Vector& rhs);
public:
	Vector();
	Vector(int x, int y);
	void Print();
private:
	int mX;
	int mY;
};
