#ifndef SQUARE_H
#define SQUARE_H

/**@brief Klasa reprezentuj¹ca pojedyncze pole szachownicy
  *
  * Zawiera metody pozwalaj¹ce na okreœlenie wspó³rzêdnych pola, ustawienie figury na danym polu
  * oraz stwierdzenie czy i jaka figura znajduje siê na danym polu
  *
  * @author Klaudia £owicka
  * @date Wrzesieñ 2008
  */

#include <iostream>

class Piece;

using namespace std;

/** Lista mo¿liwych kolorów figur */
enum Color { WHITE, BLACK};

class Square
{
public:
    /** Konstruktor */
    Square();

    /** Ustawienie figury na danym polu
      * @param piece - obiekt klasy Piece, reprezentuj¹cej dan¹ figurê */
	void setOccupier(Piece* piece);

	/** Zwraca informacjê o tym, jaka figura znajduje siê na danym polu	*/
	Piece* occupiedBy() const;

	/** Zwraca wartoœæ logiczn¹ - prawdê je¿eli na polu znajduje siê jakaœ figura
	  * oraz fa³sz w przeciwnym wypadku*/
	bool occupied() const;

	/** Ustanowienie wspó³rzêdnej x pola */
	void setX(int ex) { x = ex; }

	/** Ustanowienie wspó³rzêdnej y pola */
	void setY(int why) { y = why; }

	/** Uzyskanie wspó³rzêdnej x pola */
	int getX() { return x; }

	/** Uzyskanie wspó³rzêdnej y pola */
	int getY() { return y; }

private:
    /** Zmienne reprezentuj¹ce wspó³rzêdne pola */
	int x, y;

	/** Obiekt klasy Piece */
	Piece* _piece;
};

#endif // SQUARE_H
