/*
 *  rook.cpp
 *  ChessProject
 *
 */
#include "rook.h"
#include "board.h"

Rook::Rook(bool isWhite) : Piece(isWhite)
{
}

bool Rook::moveTo(Square* thisRook, Square* thatSpace)
{
    int rookX = thisRook->getX();
	int rookY = thisRook->getY();
	int thatX = thatSpace->getX();
	int thatY = thatSpace->getY();


    if (( abs(rookX - thatX) < 8 && thatY == rookY
        && Board::getBoard()->isClearVertical(thisRook, thatSpace))
        || (abs(rookY - thatY) < 8 && thatX == rookX
        && Board::getBoard()->isClearHorizontal(thisRook, thatSpace)))
    {
        return true;
    }
    else return false;

}

void Rook::display() const
{
    cout << " W_" + _color + " |";
}

