#pragma once

class MyString {
public:
	MyString(); // ������
	~MyString(); // �Ҹ���
private:
	char* mChars;
	int mLength; // ���� ����
	int mCapacity; // �ִ� ����
};