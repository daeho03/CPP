#pragma once
#include "Animal.h"
#include <iostream>

class Cat : public Animal {
public:
	Cat(int age);

	void Move() const;
	virtual void Speak() const;
};