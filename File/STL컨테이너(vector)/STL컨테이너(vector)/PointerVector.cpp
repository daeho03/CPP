#include <iostream>
#include <vector>
#include "PointerVector.h"
#include "Score.h"

using namespace std;

namespace samples {
	void PointerVector() {
		vector<Score*> scores;
		scores.reserve(5);

		Score* cppScore = new Score(100, "C++");
		Score* cScore = new Score(100, "C");
		Score* javaScore = new Score(100, "Java");
		Score* AlgorithmScore = new Score(100, "Algorithm");
		Score* sqlScore = new Score(100, "Sql");

		scores.push_back(cppScore);
		scores.push_back(cScore);
		scores.push_back(javaScore);
		scores.push_back(AlgorithmScore);
		scores.push_back(sqlScore);

		PrintVector(scores);

		vector<Score*>::const_iterator iter = scores.begin();
		while (iter != scores.end()) {
			Score* score = *iter;
			if (score->getName() == "Java") {
				iter = scores.erase(iter);
			}
			else {
				iter++;
			}
		}

		PrintVector(scores);

		delete cppScore;
		delete cScore;
		delete javaScore;
		delete AlgorithmScore;
		delete sqlScore;
	}

	void PrintVector(const std::vector<Score*>& scores) {
		for (vector<Score*>::const_iterator iter = scores.begin(); iter != scores.end(); iter++) {
			Score* score = *iter;
			score->PrintVariables();
		}
	}
}