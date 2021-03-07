#include <iostream>
#include <vector>
#include "VectorCalculatingSum.h"

using namespace std;

namespace samples{
	void VectorCalculatingSum() {
		vector<int> myScores;
		myScores.reserve(5);

		vector<int> yourScores;
		yourScores.reserve(5);

		myScores.push_back(15);
		myScores.push_back(25);
		myScores.push_back(35);
		myScores.push_back(45);
		myScores.push_back(55);

		yourScores.push_back(14);
		yourScores.push_back(24);
		yourScores.push_back(34);
		yourScores.push_back(44);
		yourScores.push_back(54);

		yourScores.clear();

		cout << "myScores" << endl;
		cout << "sum : " << CalculateSum(myScores) << endl;

		cout << "yourScores" << endl;
		cout << "sum : " << CalculateSum(yourScores) << endl;
	}

	int CalculateSum(const vector<int>& scores) {
		int sum = 0;

		for (size_t i = 0; i < scores.size(); i++) {
			sum += scores[i];
		}

		return sum;
	}
}