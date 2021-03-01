#include "Animal.h"

Animal::Animal(int age)
	: mAge(age){
}

// ������ virtual Ű���� �� ����
Animal::~Animal() {}

void Animal::Move() const {
	std::cout << "An animal is moving" << std::endl;
}

void Animal::Speak() const {
	std::cout << "An animal is speaking" << std::endl;
}

int Animal::GetAge() const {
	return mAge;
}