/**
 * knight.h
 *
 * This class represents a chess knight piece.
 *
 */

#ifndef KNIGHT_H
#define KNIGHT_H

#include <iostream>
#include "square.h"
#include "piece.h"

using namespace std;

class Knight : public Piece
{
 public:

    /**
    * Creates a Knight
    *
    */
    Knight(bool isWhite);

    bool moveTo(Square* thisPiece, Square* thatSpace);
    void display() const;


}; // Knight

#endif


