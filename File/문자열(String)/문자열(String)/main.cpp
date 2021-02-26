#include <iostream>
#include <sstream>
using namespace std;

void Iss();
void Oss();
void MirrorString();

int main(){
	string line = "daeho";
	const char* cLine = line.c_str(); // line이 가지고 있는 문자 배열의 시작 주소를 가리키는 포인터

	// 함수 호출
	cout << "Iss() 호출" << endl;
	Iss();
	cout << "Oss() 호출" << endl;
	Oss();
	cout << "MirrorString() 호출" << endl;
	MirrorString();
}

void Iss(){
	istringstream iss("test 123 123abc abc");
	string str1, str2, str3;
	int num;

	cout << iss.str() << endl;

	iss >> str1 >> str2 >> str3 >> num;
	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl;
	cout << "num : " << num << endl;
}

void Oss(){
	ostringstream oss;
	int num = 10;
	string  str = "oss_test";

	oss << "oss test : " << num << str << endl;
	cout << oss.str() << endl;
}

void MirrorString() {
	string line;
	cout << "Mirror String" << endl;
	cout << "문자열 입력 : ";
	cin >> line;

	for (int i = (int)line.size(); i >= 0; i--) {
		line += line[i];
	}

	cout << "mirrored string : " << line << endl;
}