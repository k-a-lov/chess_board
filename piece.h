#ifndef PIECE_H
#define PIECE_H

/**@brief Abstrakcyjna klasa reprezentuj¹ca instancjê figury na szachownicy
  *
  * Zawiera metody pozwalaj¹ce okreœliæ kolor danej figury, zasady poruszania siê figury
  * oraz wyœwietlania jej na planszy
  *
  * @author Klaudia £owicka
  * @date Wrzesieñ 2008
  */

#include <ostream>
#include <string>
#include "square.h"

using namespace std;

class Piece
{
public:
    /** Konstruktor - przyjmuje parametr isWhite:
      * @param isWhite - wartoœæ logiczna mówi¹ca o tym, czy figura jest
      *                 koloru bia³ego (prawda) czy nie (fa³sz) */
    Piece(bool isWhite);

    /** Metoda okreœlaj¹ca co nale¿y wyœwietliæ na polu, na którym znajduje siê dana figura */
    virtual void display() const = 0;

    /** Implementacja zasad ruchów mo¿liwych do wykonania dla danej figury */
    virtual bool moveTo(Square* thisPiece, Square* thatSpace);

    /** Metoda zwraca informacjê o tym, czy figura jest bia³a (prawda) czy nie (fa³sz) */
    bool isWhite() const;

protected:
    /** Wartoœæ logiczna okreœlaj¹ca, czy kolor figury to bia³y */
    bool _isWhite;

    /** Kolor figury - zmienna u¿ywana póŸniej do wyœwietlania odpowiedniej informacji na polu szachownicy */
    string _color;

 private:
     /** Obiekt klasy Square - reprezentuj¹cej pojedyncze pole na szachownicy */
    Square* _square;

}; // Piece

#endif
