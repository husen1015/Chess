#pragma once
#include "Cord.h"
class Piece {

public:
	//ctor
	Piece(const Cord& place,const bool isWhite);
	virtual bool isMoveLegal() const= 0;
	virtual bool isWayFree() const= 0;
protected:
	Cord _place;
	bool _isWhite;
};