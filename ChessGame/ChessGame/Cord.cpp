#include "Cord.h"

Cord::Cord() :_x(0), _y(0)
{
}

Cord::Cord(int x, int y) :_x(x), _y(y)
{
	_x = x;
	_y = y;
}

void Cord::setX(const int x)
{
	_x = x;
}

void Cord::setY(const int y)
{
	_y = y;
}

int Cord::getX()const
{
	return _x;
}

int Cord::getY()const
{
	return _y;
}

bool Cord::operator==(const Cord& other)const
{
	return _x == other.getX() && _y == other.getY();
}

Cord* Cord::operator=(const Cord& other)
{
	this->_x = other._x;
	this->_y = other._y;
}
