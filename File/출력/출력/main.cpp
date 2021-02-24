#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//std::cout << "namespace 사용 안 함" << std::endl;
	//cout << "namespace 사용 함" << endl;

	cout << "-------------------------------" << endl;

	int integer = 10;
	float decimal = 1.5f;
	char letter = 'a';
	char string[] = "Hello, world";
	
	cout << integer << endl;
	cout << decimal<< endl;

	cout << letter<< endl
		<< string << endl;

	cout << "-------------------------------" << endl;

	int num = 10;
	
	cout << "     showpos : " << showpos << num << endl;
	cout << "   noshowpos : " << noshowpos << num << endl;

	// 출력형식 16진수로
	cout << "    showbase : " << showbase << hex << num << endl;
	cout << "  noshowbase : " << noshowbase << num << endl;

	cout << "   uppercase : " << uppercase  << num << endl;
	cout << " nouppercase : " << nouppercase << num << endl;

	// 출력형식 다시 10진수로
	cout << dec << "    left정렬 : " << setw(6) << left <<  num << endl;
	cout << "internal정렬 : "  << setw(6) << internal << -num << endl;
	cout << "   right정렬 : " << setw(6) << right << num << endl;
}