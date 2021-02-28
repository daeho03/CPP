#pragma once
#include <iostream>

class Vector {
	friend std::ostream& operator<<(std::ostream& os, const Vector& rhs);

public:
	Vector();
	Vector(int x, int y);
	int GetX();
	int GetY();
	void  SetX(int x);
	void  SetY(int y);
	void Print();
	
	Vector operator*(const Vector& rhs);
	Vector& operator+=(const Vector& rhs);
	Vector& operator+=(const int num);
private:
	int mX;
	int mY;
};