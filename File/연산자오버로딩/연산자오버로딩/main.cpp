#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
	Vector v1(1, 2);
	Vector v2(4, 5);
	Vector v3;

	cout << v1 << endl;

	v1 += 5;

	cout << v1 << endl;

	v1 += v2;

	cout << v1 << endl;

	return 0;
}