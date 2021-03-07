#pragma once
#include<iostream>
#include<string>

using namespace std;

class StudentInfo {
public:
	StudentInfo(const string& name, const string& id);

	const string& GetName() const;
	const string& GetId() const;

	bool operator<(const StudentInfo& object) const;
private:
	string myName;
	string myId;
};