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

int Vector::GetX() {
	return mX;
}

int Vector::GetY() {
	return mY;
}

void Vector::SetX(int x) {
	mX = x;
}

void Vector::SetY(int y) {
	mX = y;
}

void Vector::Print() {
	cout << mX << mY << endl;
}


// 연산자 오버로딩
Vector& Vector::operator+=(const Vector& rhs) {
	mX += rhs.mX;
	mY += rhs.mY;

	return *this;
}

Vector& Vector::operator+=(const int num) {
	mX += num;
	mY += num;

	return *this;
}

Vector Vector::operator*(const Vector& rhs) {
	Vector result(mX * rhs.mX, mY * rhs.mY);

	return result;
}

ostream& operator<<(ostream& os, const Vector& rhs) {
	os << "x : " << rhs.mX << ", y : " << rhs.mY;
	
	return os;
}