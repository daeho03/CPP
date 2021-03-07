#include <iostream>
#include "Score.h"

Score::Score(int score, const std::string& name)
	: myScore(score)
	, myName(name) {
}

const std::string& Score::getName() const {
	return myName;
}

void Score::PrintVariables() {
	std::cout << myName << " : " << myScore << std::endl;
}