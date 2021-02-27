#pragma once
class Vector {
public:
	Vector();
	Vector(int x, int y);

	int GetX() const;
	int GetY() const;
	void SetX(int x);
	void SetY(int y);
	void Add(const Vector& vector);
private:
	int mX;
	int mY;
};