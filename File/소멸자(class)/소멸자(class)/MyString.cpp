#include <iostream>
#include "MyString.h"

MyString::MyString()
	: mLength(0)
	, mCapacity(15) {
	mChars = new char[mCapacity + 1];
}

MyString::~MyString() { // Destructor
	delete[] mChars; // 할당한 메모리는 delete해줘야 함. 안그러면 메모리 누수
	
	/*지워지는 오브젝트라 할 필요 없음
	mCapacity = 0;
	mChars = NULL;*/
}