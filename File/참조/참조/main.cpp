#include <iostream>

using namespace std;

void Swap1(int& num1, int& num2);
void Swap2(int* num1, int* num2);

int main() {
	int num1 = 1;
	int num2 = 2;
	
	cout << "Before swap : " << num1
		<< ", " << num2 << endl;

	cout << "---------------------" << endl;

	Swap1(num1, num2);
	cout << "After swap : " << num1
		<< ", " << num2 << endl;

	cout << "---------------------" << endl;

	return 0;
}

void Swap1(int& num1, int& num2) { // 참조연산자 사용한 Swap 함수
	int temp = num1;
	num1 = num2;
	num2 =  temp;
}

void Swap2(int* num1, int* num2) { // 포인터 사용한 Swap 함수
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}