/**@brief Klasa reprezentuj�ca figur� skoczka
  *
  *  Skoczek porusza si� po szachownicy w kszta�cie litery �L�, tzn. dwa pola w lewo/prawo i jedno pole wprz�d/w ty�
  *  lub dwa pola wprz�d/w ty� i jedno pole w lewo/prawo. Skoczek jest jedyn� figur�, kt�ra mo�e �przeskakiwa� inne figury.
  *  Na polu, na kt�rym znajduje si� skoczek wy�wietlone zostaje �S_b� dla skoczka bia�ego oraz �S_c� dla skoczka czarnego.
  *
  * @author Klaudia �owicka
  * @date Wrzesie� 2008
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
    * Tworzy figur� skoczka wraz z informacj�, czy jest to figura bia�a
    */
    Knight(bool isWhite);

    /** Okre�la mo�liwe ruchy skoczka */
    bool moveTo(Square* thisPiece, Square* thatSpace);

    /** Okre�la, co ma si� pojawi� na szachownicy, gdy na danym polu stoi skoczek*/
    void display() const;


}; // Knight

#endif


