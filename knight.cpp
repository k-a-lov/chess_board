/*
 *  knight.cpp
 *  ChessProject
 *
 */
#include "knight.h"
#include "board.h"

Knight::Knight(bool isWhite) : Piece(isWhite)
{
}

bool Knight::moveTo(Square* thisKnight, Square* thatSpace)
{
    int knightX = thisKnight->getX();
	int knightY = thisKnight->getY();
	int thatX = thatSpace->getX();
	int thatY = thatSpace->getY();


    if (((abs(knightX - thatX) == 2 && abs(knightY - thatY) == 1)
         || (abs(knightX - thatX) == 1 && abs(knightY - thatY) == 2)))
    {
        return true;
    }
    else
        return false;

}

void Knight::display() const
{
    cout << " S_" + _color + " |";
}



