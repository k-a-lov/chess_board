/*
 *  bishop.cpp
 *  ChessProject
 *
 */
#include "bishop.h"
#include "board.h"

Bishop::Bishop(bool isWhite) : Piece(isWhite)
{
}

bool Bishop::moveTo(Square* thisBishop, Square* thatSpace)
{
int bishopX = thisBishop->getX();
	int bishopY = thisBishop->getY();
	int thatX = thatSpace->getX();
	int thatY = thatSpace->getY();

		if (abs(bishopX - thatX) == abs(bishopY - thatY)
            && Board::getBoard()->isClearDiagonal(thisBishop, thatSpace))
		{
			return true;
		}
		else
			return false;

}

void Bishop::display() const
{
    cout << " G_" + _color + " |";
}


