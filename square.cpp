#include "square.h"
#include "piece.h"
#include <iostream>

using namespace std;

Square::Square() : _piece(NULL)
{
}

void Square::setOccupier(Piece* piece)
{
    _piece = piece;
}

bool Square::occupied() const
{
    return _piece;
}

Piece* Square::occupiedBy() const
{
    return _piece;
}

