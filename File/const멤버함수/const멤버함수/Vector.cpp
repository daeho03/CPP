#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector()
	: mX(0)
	, mY(0) {
}

Vector::Vector(int x, int y)
	: mX(x)
	, mY(y) {
}

int Vector::GetX() const{
	return mX;
}

int Vector::GetY() const {
	return mY;
}

void Vector::SetX(int x) {
	mX = x;
}

void Vector::SetY(int y) {
	mY = y;
}

void Vector::Add(const Vector& vector) {
	mX += vector.mX;
	mY += vector.mY;
}