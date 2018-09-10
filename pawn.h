/**@brief Klasa reprezentuj¹ca figurê pionka
  *
  *  Pionek mo¿e poruszaæ o jedno pole wprzód lub o dwa, pod warunkiem ¿e jest to jego pierwszy ruch.
  *  Pionek mo¿e zbiæ figurê przeciwnika jedynie, gdy znajduje siê ona jedno pole po skosie od pozycji pionka.
  *  Na polu, na którym znajduje siê pionek wyœwietlone zostaje „P_b” dla pionka bia³ego oraz „P_c” dla pionka czarnego.
  *
  * @author Klaudia £owicka
  * @date Wrzesieñ 2008
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
    * Tworzy figurê pionka wraz z informacjê, czy jest to figura bia³a
    */
    Pawn(bool isWhite);

    /** Okreœla mo¿liwe ruchy pionka */
    bool moveTo(Square* thisPiece, Square* thatSpace);

    /** Okreœla, co ma siê pojawiæ na szachownicy, gdy na danym polu stoi pionek*/
    void display() const;


}; // Pawn

#endif
