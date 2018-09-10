#ifndef PIECE_H
#define PIECE_H

#include <ostream>
#include <string>
#include "square.h"

using namespace std;

class Piece
{
public:
    Piece(bool isWhite);
    virtual void display() const = 0;
    virtual bool moveTo(Square* thisPiece, Square* thatSpace);
    bool isWhite() const;

protected:
    bool _isWhite;
    string _color;

 private:
    Square* _square;

}; // Piece

#endif
