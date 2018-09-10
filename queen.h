/**@brief Klasa reprezentuj�ca figur� kr�lowej (hetmana)
  *
  *  Kr�lowa mo�e porusza� si� o dowoln� liczb� p�l w ka�d� stron� (r�wnie� bez mo�liwo�ci �przeskakiwania� figur).
  *  Na polu, na kt�rym znajduje si� kr�lowa wy�wietlone zostaje �H_b� dla kr�lowej bia�ej oraz �H_c� dla kr�lowej czarnej.
  *
  * @author Klaudia �owicka
  * @date Wrzesie� 2008
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
    * Tworzy figur� kr�lowej wraz z informacj�, czy jest to figura bia�a
    */
    Queen(bool isWhite);

    /** Okre�la mo�liwe ruchy kr�lowej */
    bool moveTo(Square* thisPiece, Square* thatSpace);

    /** Okre�la, co ma si� pojawi� na szachownicy, gdy na danym polu stoi kr�lowa*/
    void display() const;


}; // Queen

#endif



