#include <iostream>
#include <string>
#include <map>
#include "MapUserDefinedTypes.h"
#include "StudentInfo.h"

using namespace std;

namespace samples {
	void MapUserDefinedTypes() {
		map<StudentInfo, int> studentScores;

		studentScores.insert(pair<StudentInfo, int>(StudentInfo("Lulu", "31109"), 100));
		studentScores.insert(pair<StudentInfo, int>(StudentInfo("Poppy", "31110"), 95));
		studentScores.insert(pair<StudentInfo, int>(StudentInfo("Kai", "31111"), 74));
		studentScores.insert(pair<StudentInfo, int>(StudentInfo("Lulu", "31112"), 50));

		for (map<StudentInfo, int>::const_iterator iter = studentScores.begin(); iter != studentScores.end(); iter++) {
			cout << iter->first.GetName() << "[" << iter->first.GetId() << "] : " << iter->second << endl;
		}
	}
}