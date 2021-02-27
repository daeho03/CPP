#include <iostream>
#include "MyString.h"

using namespace std;

void Foo();

int main() {
	Foo(); // 함수 호출

	return 0;
}

void Foo() {
	MyString name;
} // name 개체는 여기서 삭제되므로 ~MyString() 소멸자 함수는 여기서 호출