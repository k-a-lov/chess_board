#include <string>
#include "piece.h"


Piece::Piece(bool isWhite) : _isWhite(isWhite), _square(NULL)
{
        if(isWhite)
        _color = "b";
    else
        _color = "c";
}

bool Piece::isWhite() const
{
    return _isWhite;
}


bool Piece::moveTo(Square* thisPiece, Square* thatSpace)
{

	bool valid = true;

	return valid;
}


