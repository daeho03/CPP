#include "Animal.h"

Animal::Animal(int age)
	: mAge(age){
}

// 구현시 virtual 키워드 안 넣음
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