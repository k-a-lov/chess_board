/**@brief Klasa reprezentuj¹ca figurê wie¿y
  *
  *  Wie¿a mo¿e poruszaæ siê o dowoln¹ liczbê pól poziomo lub pionowo (ale nie mo¿e „przeskakiwaæ” przez inne figury!).
  *  Na polu, na którym znajduje siê wie¿a wyœwietlone zostaje „W_b” dla wie¿y bia³ej oraz „W_c” dla wie¿y czarnej.
  *
  * @author Klaudia £owicka
  * @date Wrzesieñ 2008
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
    * Tworzy figurê wie¿y wraz z informacjê, czy jest to figura bia³a
    */
    Rook(bool isWhite);

    /** Okreœla mo¿liwe ruchy wie¿y */
    bool moveTo(Square* thisPiece, Square* thatSpace);

    /** Okreœla, co ma siê pojawiæ na szachownicy, gdy na danym polu stoi wie¿a*/
    void display() const;


}; // Rook

#endif

