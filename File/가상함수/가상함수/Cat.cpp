#include "Cat.h"

Cat::Cat(int age)
	: Animal(age) {
}

// 구현시 virtual 키워드 안 넣음
void Cat::Move() const{
	std::cout << "A cat is moving" << std::endl;
}

void Cat::Speak() const{
	std::cout << "Meow" << std::endl;
}