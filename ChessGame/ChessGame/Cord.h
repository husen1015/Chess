#pragma once
class Cord {
public:
	Cord();
	Cord(int x, int y);

	//setters
	void setX(const int x);
	void setY(const int x);

private:
	int _x;
	int _y;
};