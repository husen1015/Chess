#include "GameManager.h"

unsigned int GameManager::PlayTurn(std::string moveOrder)
{
	//parse order
	parseMove(moveOrder);

	//check validity of order
	unsigned int status = checkValidMove();
	if (status != VALID_RESULT) {
		return status;
	}
	//attempt move
}

void GameManager::parseMove(const std::string moveOrder)
{
	//move order for example e2e4 ie move piece from e2 to e4
	_src.setX(moveOrder[0] - 'a'); //src col
	_src.setY(abs(moveOrder[1] - 56)); //src row
	_dst.setX(moveOrder[2] - 'a'); //dst col
	_dst.setY(abs(moveOrder[3] - 56)); //dst row
}

unsigned int GameManager::checkValidMove() const
{
	//check if src != dst
	if (_src == _dst) return SAME_CORDS_ERROR;

	//check if src has a piece of the current player
	
	//check if dst has a piece of same type as player

	//this move will cause check on the current player ie self check

	//check if moving this piece is legal as per its movement rules

	//valid move
	return VALID_RESULT;
}
