/**@brief Klasa reprezentuj�ca figur� go�ca
  *
  *  Goniec porusza si� o dowolon� liczb� p�l po skosie, ale nie mo�e �przeskakiwa� przez inne figury.
  *  Na polu, na kt�rym znajduje si� goniec wy�wietlone zostaje �G_b� dla go�ca bia�ego oraz �G_c� dla go�ca czarnego.
  *
  * @author Klaudia �owicka
  * @date Wrzesie� 2008
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
    * Tworzy figur� go�ca wraz z informacj�, czy jest to figura bia�a
    */
    Bishop(bool isWhite);

    /** Okre�la mo�liwe ruchy go�ca */
    bool moveTo(Square* thisPiece, Square* thatSpace);

    /** Okre�la, co ma si� pojawi� na szachownicy, gdy na danym polu stoi goniec*/
    void display() const;


}; // Bishop

#endif

