/**@brief Klasa reprezentuj�ca figur� kr�la
  *
  *  Kr�l mo�e porusza� si� o jedno pole w ka�d� stron�.
  *  Na polu, na kt�rym znajduje si� kr�l wy�wietlone zostaje �K_b� dla kr�la bia�ego oraz �K_c� dla kr�la czarnego.
  *
  * @author Klaudia �owicka
  * @date Wrzesie� 2008
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
    * Tworzy figur� kr�la wraz z informacj�, czy jest to figura bia�a
    */
    King(bool isWhite);

    /** Okre�la mo�liwe ruchy kr�la */
    bool moveTo(Square* thisPiece, Square* thatSpace);

    /** Okre�la, co ma si� pojawi� na szachownicy, gdy na danym polu stoi kr�l*/
    void display() const;


}; // King

#endif




