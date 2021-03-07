#pragma once

#include<iostream>
#include<string>

class Score {
public:
	Score(int score, const std::string& className);

	const std::string& getName() const;
	void PrintVariables();
private:
	int myScore;
	std::string myName;
};