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
			fs.get(ch); // 한 줄일 경우 .getline(), 한 단어는 fs >> word
			if (fs.fail()) { // eof를 만나면 break
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