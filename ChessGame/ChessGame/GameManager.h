#pragma once
#include <string>
#include "Cord.h"
#include "Definitions.h"
#include <iostream>

class GameManager {

public: 
	unsigned int PlayTurn(const std::string moveOrder);
	void parseMove(const std::string moveOrder);
	unsigned int checkValidMove()const;
private:
	Cord _src, _dst;
};