/**@brief Klasa reprezentuj¹ca figurê króla
  *
  *  Król mo¿e poruszaæ siê o jedno pole w ka¿d¹ stronê.
  *  Na polu, na którym znajduje siê król wyœwietlone zostaje „K_b” dla króla bia³ego oraz „K_c” dla króla czarnego.
  *
  * @author Klaudia £owicka
  * @date Wrzesieñ 2008
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
    * Tworzy figurê króla wraz z informacjê, czy jest to figura bia³a
    */
    King(bool isWhite);

    /** Okreœla mo¿liwe ruchy króla */
    bool moveTo(Square* thisPiece, Square* thatSpace);

    /** Okreœla, co ma siê pojawiæ na szachownicy, gdy na danym polu stoi król*/
    void display() const;


}; // King

#endif




