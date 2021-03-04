#pragma once

class Math {
public:
	static int Ceil(float value);
	static int Floor(float value);
	static float power(float value, float power);
	static int Round(float value);
	static float Square(float value);
private:
	Math(); // 개체 생성 방지
};