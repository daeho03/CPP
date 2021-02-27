#include<iostream>
#include "Vector.h"

int main() {
	Vector vc = Vector(2, 4);
	std::cout << "x = " << vc.GetX() << ", y = "
		<< vc.GetY() << std::endl;
	
	vc.Add(vc);

	std::cout << "x = " << vc.GetX() << ", y = "
		<< vc.GetY() << std::endl;

	return 0;
}