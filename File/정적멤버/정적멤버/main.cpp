#include <iostream>
#include "Math.h"

using namespace std;

int main() {
	cout << "Ceil(4.1)의 리턴 값 : " << Math::Ceil(4.1) << endl
		<< "Floor(4.7)의 리턴 값 : " << Math::Floor(4.7) << endl
		<< "Round(4.5)의 리턴 값 : " << Math::Round(4.5) << endl;

	return 0;
}