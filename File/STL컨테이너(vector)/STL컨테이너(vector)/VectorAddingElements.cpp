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

		scores.resize(10); // 사이즈와 용량 모두 10으로

		PrintScores(scores);
	}

	void PrintScores(const vector<int>& scores) {
		cout << "Current elements : ";
		// 매개변수가 const로 들어왔기 때문에 const_iterator로 써야함(가리키는 곳은 바꿀 수 있지만 값은 변경x)
		for (vector<int>::const_iterator iter = scores.begin(); iter != scores.end(); iter++) {
			cout << *iter << " ";
		}
		cout << endl;

		cout << "Current capacity : " << scores.capacity() << endl;
		cout << "Current size : " << scores.size() << endl;
	}
}