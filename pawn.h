/**
 * pawn.h
 *
 * This class represents a chess pawn piece.
 *
 */

#ifndef PAWN_H
#define PAWN_H

#include <iostream>
#include "square.h"
#include "piece.h"

using namespace std;

class Pawn : public Piece
{
 public:

    /**
    * Creates a Pawn
    *
    */
    Pawn(bool isWhite);

    bool moveTo(Square* thisPiece, Square* thatSpace);
    void display() const;


}; // Pawn

#endif
