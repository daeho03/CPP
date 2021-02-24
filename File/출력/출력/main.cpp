#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//std::cout << "namespace ��� �� ��" << std::endl;
	//cout << "namespace ��� ��" << endl;

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

	// ������� 16������
	cout << "    showbase : " << showbase << hex << num << endl;
	cout << "  noshowbase : " << noshowbase << num << endl;

	cout << "   uppercase : " << uppercase  << num << endl;
	cout << " nouppercase : " << nouppercase << num << endl;

	// ������� �ٽ� 10������
	cout << dec << "    left���� : " << setw(6) << left <<  num << endl;
	cout << "internal���� : "  << setw(6) << internal << -num << endl;
	cout << "   right���� : " << setw(6) << right << num << endl;
}