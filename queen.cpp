/*
 *  queen.cpp
 *  ChessProject
 *
 */
#include "queen.h"
#include "board.h"

Queen::Queen(bool isWhite) : Piece(isWhite)
{
}

bool Queen::moveTo(Square* thisQueen, Square* thatSpace)
{

		if (Board::getBoard()->isClearVertical(thisQueen, thatSpace)
            && Board::getBoard()->isClearHorizontal(thisQueen, thatSpace)
            && Board::getBoard()->isClearDiagonal(thisQueen, thatSpace))
		{
			return true;
		}
		else return false;


}

void Queen::display() const
{
    cout << " H_" + _color + " |";
}




