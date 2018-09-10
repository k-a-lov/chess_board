/**
 * king.h
 *
 * This class represents a chess king piece.
 *
 */

#ifndef KING_H
#define KING_H

#include <iostream>
#include "square.h"
#include "piece.h"

using namespace std;

class King : public Piece
{
 public:

    /**
    * Creates a King
    *
    */
    King(bool isWhite);

    bool moveTo(Square* thisPiece, Square* thatSpace);
    void display() const;


}; // King

#endif




