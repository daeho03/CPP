#include "StudentInfo.h"

StudentInfo::StudentInfo(const string& name, const string& id)
	: myName(name)
	, myId(id) {
}

const string& StudentInfo::GetName() const{
	return myName;
}

const string& StudentInfo::GetId() const {
	return myId;
}

bool StudentInfo::operator<(const StudentInfo& object) const {
	if (myName == object.myName) {
		return myId < object.myId;
	}
	return myName < object.myName;
}