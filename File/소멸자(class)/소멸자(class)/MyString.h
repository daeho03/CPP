#pragma once

class MyString {
public:
	MyString(); // 생성자
	~MyString(); // 소멸자
private:
	char* mChars;
	int mLength; // 실제 길이
	int mCapacity; // 최대 길이
};