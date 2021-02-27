#include <iostream>
#include <iomanip>

using namespace std;

void ReverseInputString();

int main() {
	int num;
	int sum = 0;
	while (true) {
		cout << "enter an interger or EOF to quit : ";
		cin >> num;
		if (cin.eof()) {
			break;
		}
		if (cin.fail()) {
			cout << "Invalid input" << endl;
			cin.clear();
			cin.ignore(LLONG_MAX, '\n');
			continue;
		}
		sum += num;
	}
	cin.clear();

	cout << sum << endl;

	cout << "-----------------------------" << endl;

	ReverseInputString();

	return 0;
}

void ReverseInputString() {
	const int LINE_SIZE = 512;
	char line[LINE_SIZE];

	cout << "enter an string to reverse" << endl
		<< "	or EOF to quit : ";
	cin.getline(line, LINE_SIZE);
	if (cin.fail()) { // stringÀº eof fail
		cin.clear();
		return;
	}

	char* p = line;
	char* q = line + strlen(line) - 1;

	while (p < q) {
		char temp = *p;
		*p = *q;
		*q = temp;

		++p;
		--q;
	}

	cout << "Reverse string : " << line << endl;
}