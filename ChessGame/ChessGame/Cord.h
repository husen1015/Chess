#pragma once
class Cord {
public:
	Cord();
	Cord(int x, int y);

	//setters
	void setX(const int x);
	void setY(const int x);

	//getters
	int getX()const;
	int getY()const;

	//operator
	bool operator==(const Cord& other)const;

private:
	int _x;
	int _y;
};