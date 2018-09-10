/**
 * queen.h
 *
 * This class represents a chess queen piece.
 *
 */

#ifndef QUEEN_H
#define QUEEN_H

#include <iostream>
#include "square.h"
#include "piece.h"

using namespace std;

class Queen : public Piece
{
 public:

    /**
    * Creates a Queen
    *
    */
    Queen(bool isWhite);

    bool moveTo(Square* thisPiece, Square* thatSpace);
    void display() const;


}; // Queen

#endif



