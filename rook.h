/**@brief Klasa reprezentuj�ca figur� wie�y
  *
  *  Wie�a mo�e porusza� si� o dowoln� liczb� p�l poziomo lub pionowo (ale nie mo�e �przeskakiwa� przez inne figury!).
  *  Na polu, na kt�rym znajduje si� wie�a wy�wietlone zostaje �W_b� dla wie�y bia�ej oraz �W_c� dla wie�y czarnej.
  *
  * @author Klaudia �owicka
  * @date Wrzesie� 2008
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
    * Tworzy figur� wie�y wraz z informacj�, czy jest to figura bia�a
    */
    Rook(bool isWhite);

    /** Okre�la mo�liwe ruchy wie�y */
    bool moveTo(Square* thisPiece, Square* thatSpace);

    /** Okre�la, co ma si� pojawi� na szachownicy, gdy na danym polu stoi wie�a*/
    void display() const;


}; // Rook

#endif

