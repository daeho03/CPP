#include <iostream>
#include "MyString.h"

MyString::MyString()
	: mLength(0)
	, mCapacity(15) {
	mChars = new char[mCapacity + 1];
}

MyString::~MyString() { // Destructor
	delete[] mChars; // �Ҵ��� �޸𸮴� delete����� ��. �ȱ׷��� �޸� ����
	
	/*�������� ������Ʈ�� �� �ʿ� ����
	mCapacity = 0;
	mChars = NULL;*/
}