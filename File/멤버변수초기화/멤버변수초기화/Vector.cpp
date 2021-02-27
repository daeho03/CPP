#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector()
	: mX(0)
	, mY(0) {
	cout << "Vector() : (" << mX << ", " << mY << ")" << endl;
}

Vector::Vector(int x, int y)
	: mX(x)
	, mY(y) {
	cout << "Vector() : (" << mX << ", " << mY << ")" << endl;
}