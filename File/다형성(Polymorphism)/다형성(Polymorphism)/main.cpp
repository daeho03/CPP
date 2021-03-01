#include <iostream>
#include "Animal.h"
#include "Cat.h"

int main() {
	Animal* myCat = new Cat(4); // Animal*
	Cat* yourCat = new Cat(7);
	
	myCat->Move(); // Move()�� �����Լ� �ƴϹǷ� Animal* �� Cat�� �����ѵ� Animal Ŭ������ Move()�� ȣ��
	yourCat->Move();

	myCat->Speak(); // Speak()�� �����Լ��̹Ƿ� Cat�� Speak()�� ȣ��
	yourCat->Speak();

	delete myCat;
	delete yourCat;
}