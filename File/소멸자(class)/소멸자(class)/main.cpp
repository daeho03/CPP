#include <iostream>
#include "MyString.h"

using namespace std;

void Foo();

int main() {
	Foo(); // �Լ� ȣ��

	return 0;
}

void Foo() {
	MyString name;
} // name ��ü�� ���⼭ �����ǹǷ� ~MyString() �Ҹ��� �Լ��� ���⼭ ȣ��