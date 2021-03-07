#include <iostream>
#include <vector>
#include "VectorAddingElements.h"

using namespace std;

namespace samples {
	void VectorAddingElements() {
		vector<int> scores;
		scores.reserve(5);

		scores.push_back(74);
		scores.push_back(77);
		scores.push_back(100);
		scores.push_back(91);
		scores.push_back(92);

		PrintScores(scores);

		scores.pop_back();
		scores.pop_back();

		PrintScores(scores);

		scores.resize(10); // ������� �뷮 ��� 10����

		PrintScores(scores);
	}

	void PrintScores(const vector<int>& scores) {
		cout << "Current elements : ";
		// �Ű������� const�� ���Ա� ������ const_iterator�� �����(����Ű�� ���� �ٲ� �� ������ ���� ����x)
		for (vector<int>::const_iterator iter = scores.begin(); iter != scores.end(); iter++) {
			cout << *iter << " ";
		}
		cout << endl;

		cout << "Current capacity : " << scores.capacity() << endl;
		cout << "Current size : " << scores.size() << endl;
	}
}