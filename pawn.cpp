/*
 *  pawn.cpp
 *  ChessProject
 *
 */
#include <string>
#include <iostream>

using namespace std;

#include "pawn.h"
#include "board.h"

Pawn::Pawn(bool isWhite) : Piece(isWhite)
{
}

bool Pawn::moveTo(Square* thisPawn, Square* thatSpace)
{
	int pawnX = thisPawn->getX();
	int pawnY = thisPawn->getY();
	int thatX = thatSpace->getX();
	int thatY = thatSpace->getY();

	if (thisPawn->occupiedBy()->isWhite())
	{

		if ((pawnX == thatX + 1 && thatY == pawnY)
            || (pawnX == thatX + 2 && thatY == pawnY && pawnX == 6
                && !Board::getBoard()->getSquare(pawnX - 1, pawnY)->occupied()))
		{
			return true;
		}
		else
			if ((pawnY + 1 == thatY || pawnY - 1 == thatY) && pawnX - 1 == thatX)
			{
				return true;
			}
			else
				return false;
	}
	else
		if (!thisPawn->occupiedBy()->isWhite())
		{
			if ((pawnX == thatX -1 && thatY == pawnY)
                ||(pawnX == thatX -2 && thatY == pawnY && pawnX == 1
                   && !Board::getBoard()->getSquare(pawnX + 1, pawnY)->occupied()))
			{
				return true;
			}
			else
				if ((pawnY + 1 == thatY || pawnY - 1 == thatY) && pawnX + 1 == thatX)
				{
					return true;
				}
				else
					return false;
		}
    else
        {
            return false;
        }
}

void Pawn::display() const
{
    cout << " P_" + _color + " |";
}
