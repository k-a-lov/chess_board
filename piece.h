#ifndef PIECE_H
#define PIECE_H

/**@brief Abstrakcyjna klasa reprezentuj�ca instancj� figury na szachownicy
  *
  * Zawiera metody pozwalaj�ce okre�li� kolor danej figury, zasady poruszania si� figury
  * oraz wy�wietlania jej na planszy
  *
  * @author Klaudia �owicka
  * @date Wrzesie� 2008
  */

#include <ostream>
#include <string>
#include "square.h"

using namespace std;

class Piece
{
public:
    /** Konstruktor - przyjmuje parametr isWhite:
      * @param isWhite - warto�� logiczna m�wi�ca o tym, czy figura jest
      *                 koloru bia�ego (prawda) czy nie (fa�sz) */
    Piece(bool isWhite);

    /** Metoda okre�laj�ca co nale�y wy�wietli� na polu, na kt�rym znajduje si� dana figura */
    virtual void display() const = 0;

    /** Implementacja zasad ruch�w mo�liwych do wykonania dla danej figury */
    virtual bool moveTo(Square* thisPiece, Square* thatSpace);

    /** Metoda zwraca informacj� o tym, czy figura jest bia�a (prawda) czy nie (fa�sz) */
    bool isWhite() const;

protected:
    /** Warto�� logiczna okre�laj�ca, czy kolor figury to bia�y */
    bool _isWhite;

    /** Kolor figury - zmienna u�ywana p�niej do wy�wietlania odpowiedniej informacji na polu szachownicy */
    string _color;

 private:
     /** Obiekt klasy Square - reprezentuj�cej pojedyncze pole na szachownicy */
    Square* _square;

}; // Piece

#endif
