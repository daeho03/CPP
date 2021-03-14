#include <iostream>
#include <vector>
#include "FixedVector.h"
#include "IntVector.h"

using namespace std;

int main()
{
	FixedVector<int, 4> scores;

	scores.Add(100);
	scores.Add(100);

	cout << "scores<int, 4>.size : " << scores.GetSize()
		<< ", scores<int, 4>.capacity : " << scores.GetCapacity() << endl;

	FixedVector<IntVector, 4> intVectors1;

	intVectors1.Add(IntVector(7, 11));
	intVectors1.Add(IntVector(11, 14));
	intVectors1.Add(IntVector(14, 17));

	cout << "intVectors1<IntVector, 4>.size : " << intVectors1.GetSize()
		<< ", intVectors1<IntVector, 4>.capacity : " << intVectors1.GetCapacity() << endl;

	IntVector* intVector = new IntVector(4, 7);

	FixedVector<IntVector*, 2> intVectors2;

	intVectors2.Add(intVector);
	
	cout << "intVectors2<IntVector*, 2>.size : " << intVectors2.GetSize()
		<< ", intVectors2<IntVector*, 2>.capacity : " << intVectors2.GetCapacity() << endl;
}