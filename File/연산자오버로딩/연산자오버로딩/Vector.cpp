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

void Vector::Print() {
	cout << mX << mY << endl;
}

ostream& operator<<(ostream& os, const Vector& rhs){
	os << rhs.mX << ", " << rhs.mY;
	
	return os;
}