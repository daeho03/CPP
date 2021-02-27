#include <iostream>
#include <fstream>

using namespace std;

void Read();

int main() {
	Read();
}

void Read() {
	fstream fs;
	fs.open("test.txt");

	if (fs.is_open()) {
		char ch;
		cout << "file is open" << endl;
		while (true) {
			fs.get(ch); // �� ���� ��� .getline(), �� �ܾ�� fs >> word
			if (fs.fail()) { // eof�� ������ break
				break;
			}

			cout << ch;
		}
	}
	else {
		cout << "file is not open";
	}

	fs.close();
}