/**@brief Klasa reprezentuj¹ca figurê królowej (hetmana)
  *
  *  Królowa mo¿e poruszaæ siê o dowoln¹ liczbê pól w ka¿d¹ stronê (równie¿ bez mo¿liwoœci „przeskakiwania” figur).
  *  Na polu, na którym znajduje siê królowa wyœwietlone zostaje „H_b” dla królowej bia³ej oraz „H_c” dla królowej czarnej.
  *
  * @author Klaudia £owicka
  * @date Wrzesieñ 2008
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
    * Tworzy figurê królowej wraz z informacjê, czy jest to figura bia³a
    */
    Queen(bool isWhite);

    /** Okreœla mo¿liwe ruchy królowej */
    bool moveTo(Square* thisPiece, Square* thatSpace);

    /** Okreœla, co ma siê pojawiæ na szachownicy, gdy na danym polu stoi królowa*/
    void display() const;


}; // Queen

#endif



