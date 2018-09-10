/**
 * bishop.h
 *
 * This class represents a chess bishop piece.
 *
 */

#ifndef BISHOP_H
#define BISHOP_H

#include <iostream>
#include "square.h"
#include "piece.h"

using namespace std;

class Bishop : public Piece
{
 public:

    /**
    * Creates a Bishop
    *
    */
    Bishop(bool isWhite);

    bool moveTo(Square* thisPiece, Square* thatSpace);
    void display() const;


}; // Bishop

#endif

