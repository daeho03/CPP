#include <iostream>
#include "MyString.h"

using namespace std;

void Foo();

int main() {
	Foo(); // �Լ� ȣ��
}

void Foo() {
	MyString name;
} // name ��ü�� ���⼭ �����ǹǷ� ~MyString() �Ҹ��� �Լ��� ���⼭ ȣ��