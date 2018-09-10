/**@brief Klasa reprezentuj¹ca figurê skoczka
  *
  *  Skoczek porusza siê po szachownicy w kszta³cie litery „L”, tzn. dwa pola w lewo/prawo i jedno pole wprzód/w ty³
  *  lub dwa pola wprzód/w ty³ i jedno pole w lewo/prawo. Skoczek jest jedyn¹ figur¹, która mo¿e „przeskakiwaæ” inne figury.
  *  Na polu, na którym znajduje siê skoczek wyœwietlone zostaje „S_b” dla skoczka bia³ego oraz „S_c” dla skoczka czarnego.
  *
  * @author Klaudia £owicka
  * @date Wrzesieñ 2008
  */

#ifndef KNIGHT_H
#define KNIGHT_H

#include <iostream>
#include "square.h"
#include "piece.h"

using namespace std;

class Knight : public Piece
{
 public:

    /**
    * Tworzy figurê skoczka wraz z informacjê, czy jest to figura bia³a
    */
    Knight(bool isWhite);

    /** Okreœla mo¿liwe ruchy skoczka */
    bool moveTo(Square* thisPiece, Square* thatSpace);

    /** Okreœla, co ma siê pojawiæ na szachownicy, gdy na danym polu stoi skoczek*/
    void display() const;


}; // Knight

#endif


