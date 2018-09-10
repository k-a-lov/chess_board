/**
 * rook.h
 *
 * This class represents a chess rook piece.
 *
 */

#ifndef ROOK_H
#define ROOK_H

#include <iostream>
#include "square.h"
#include "piece.h"

using namespace std;

class Rook : public Piece
{
 public:

    /**
    * Creates a Rook
    *
    */
    Rook(bool isWhite);

    bool moveTo(Square* thisPiece, Square* thatSpace);
    void display() const;


}; // Rook

#endif

