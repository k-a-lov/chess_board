/**@brief Klasa reprezentuj�ca figur� pionka
  *
  *  Pionek mo�e porusza� o jedno pole wprz�d lub o dwa, pod warunkiem �e jest to jego pierwszy ruch.
  *  Pionek mo�e zbi� figur� przeciwnika jedynie, gdy znajduje si� ona jedno pole po skosie od pozycji pionka.
  *  Na polu, na kt�rym znajduje si� pionek wy�wietlone zostaje �P_b� dla pionka bia�ego oraz �P_c� dla pionka czarnego.
  *
  * @author Klaudia �owicka
  * @date Wrzesie� 2008
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
    * Tworzy figur� pionka wraz z informacj�, czy jest to figura bia�a
    */
    Pawn(bool isWhite);

    /** Okre�la mo�liwe ruchy pionka */
    bool moveTo(Square* thisPiece, Square* thatSpace);

    /** Okre�la, co ma si� pojawi� na szachownicy, gdy na danym polu stoi pionek*/
    void display() const;


}; // Pawn

#endif
