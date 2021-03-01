#pragma once
#include <iostream>

class Animal {
public:
	Animal(int age);
	virtual ~Animal();

	void Move() const;
	virtual void Speak() const;
	
	int GetAge() const;
private:
	int mAge;
};