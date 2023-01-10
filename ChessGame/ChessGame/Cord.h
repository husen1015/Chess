#pragma once

//this class represents a single 2d coordinate on the board
class Cord {
public:
	//ctors
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
	Cord* operator=(const Cord& other);
private:
	int _x;
	int _y;
};