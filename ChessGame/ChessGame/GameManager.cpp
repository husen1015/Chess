#include "GameManager.h"

unsigned int GameManager::PlayTurn(std::string moveOrder)
{
	//parse order
	parseMove(moveOrder);

	//check validity of order
	if (isValidMove()) {
		//attempt to make the move
		std::cout << moveOrder;
	}
	return 0;
}

void GameManager::parseMove(const std::string moveOrder)
{
	//move order for example e2e4 ie move piece from e2 to e4
	_src.setX(moveOrder[0] - 'a'); //src col
	_src.setY(abs(moveOrder[1] - 56)); //src row
	_dst.setX(moveOrder[2] - 'a'); //dst col
	_dst.setY(abs(moveOrder[3] - 56)); //dst row
}

bool GameManager::isValidMove() const
{
	//check if src!=dst

	//check if dst doesnt have a piece in place of same type

	return true;
}
