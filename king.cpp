#include "king.h"
#include "board.h"

King::King(bool isWhite) : Piece(isWhite)
{
}

bool King::moveTo(Square* thisKing, Square* thatSpace)
{
	int kingX = thisKing->getX();
	int kingY = thisKing->getY();
	int thatX = thatSpace->getX();
	int thatY = thatSpace->getY();


    if (abs(kingX - thatX) < 2 && abs(kingY - thatY) < 2)
    {
        return true;
    }
    else
        return false;

}

void King::display() const
{
    cout << " K_" + _color + " |";
}





