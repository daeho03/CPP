#include <iostream>
#include "Animal.h"
#include "Cat.h"

int main() {
	Animal* myCat = new Cat(4); // Animal*
	Cat* yourCat = new Cat(7);
	
	myCat->Move(); // Move()는 가상함수 아니므로 Animal* 가 Cat을 가리켜도 Animal 클래스의 Move()가 호출
	yourCat->Move();

	myCat->Speak(); // Speak()는 가상함수이므로 Cat의 Speak()가 호출
	yourCat->Speak();

	delete myCat;
	delete yourCat;
}