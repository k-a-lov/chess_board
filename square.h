#ifndef SQUARE_H
#define SQUARE_H

/**@brief Klasa reprezentuj�ca pojedyncze pole szachownicy
  *
  * Zawiera metody pozwalaj�ce na okre�lenie wsp�rz�dnych pola, ustawienie figury na danym polu
  * oraz stwierdzenie czy i jaka figura znajduje si� na danym polu
  *
  * @author Klaudia �owicka
  * @date Wrzesie� 2008
  */

#include <iostream>

class Piece;

using namespace std;

/** Lista mo�liwych kolor�w figur */
enum Color { WHITE, BLACK};

class Square
{
public:
    /** Konstruktor */
    Square();

    /** Ustawienie figury na danym polu
      * @param piece - obiekt klasy Piece, reprezentuj�cej dan� figur� */
	void setOccupier(Piece* piece);

	/** Zwraca informacj� o tym, jaka figura znajduje si� na danym polu	*/
	Piece* occupiedBy() const;

	/** Zwraca warto�� logiczn� - prawd� je�eli na polu znajduje si� jaka� figura
	  * oraz fa�sz w przeciwnym wypadku*/
	bool occupied() const;

	/** Ustanowienie wsp�rz�dnej x pola */
	void setX(int ex) { x = ex; }

	/** Ustanowienie wsp�rz�dnej y pola */
	void setY(int why) { y = why; }

	/** Uzyskanie wsp�rz�dnej x pola */
	int getX() { return x; }

	/** Uzyskanie wsp�rz�dnej y pola */
	int getY() { return y; }

private:
    /** Zmienne reprezentuj�ce wsp�rz�dne pola */
	int x, y;

	/** Obiekt klasy Piece */
	Piece* _piece;
};

#endif // SQUARE_H
