#include <iostream>
#include "MyArray.h"

using namespace std;

int main() {
	MyArray<int> scores;
	cout << scores.Add(10) << endl;
	cout << scores.Add(20) << endl;
	cout << scores.Add(30) << endl;
	cout << "Scores - size : " << scores.GetSize() << endl;
	cout << scores.Add(40) << endl;
}