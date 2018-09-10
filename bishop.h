/**@brief Klasa reprezentuj¹ca figurê goñca
  *
  *  Goniec porusza siê o dowolon¹ liczbê pól po skosie, ale nie mo¿e „przeskakiwaæ” przez inne figury.
  *  Na polu, na którym znajduje siê goniec wyœwietlone zostaje „G_b” dla goñca bia³ego oraz „G_c” dla goñca czarnego.
  *
  * @author Klaudia £owicka
  * @date Wrzesieñ 2008
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
    * Tworzy figurê goñca wraz z informacjê, czy jest to figura bia³a
    */
    Bishop(bool isWhite);

    /** Okreœla mo¿liwe ruchy goñca */
    bool moveTo(Square* thisPiece, Square* thatSpace);

    /** Okreœla, co ma siê pojawiæ na szachownicy, gdy na danym polu stoi goniec*/
    void display() const;


}; // Bishop

#endif

