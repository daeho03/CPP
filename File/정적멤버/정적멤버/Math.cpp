#include <iostream>
#include "Math.h"

// 무조건 올림
int Math::Ceil(float value) {
	int intValue = static_cast<int>(value);
	if (value == static_cast<float>(intValue)) {
		return intValue;
	}
	return intValue + 1;
}

// 무조건 내림
int Math::Floor(float value) {
	return static_cast<int>(value);
}

// 제곱근
float Math::power(float value, float power) {
	return pow(value, power);
}

// 반올림
int Math::Round(float value) {
	return static_cast<int>(value + 0.5f);
}

// 제곱
float Math::Square(float value) {
	return value * value;
}