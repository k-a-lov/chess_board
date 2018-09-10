#ifndef BOARD_H
#define BOARD_H

/**@brief Klasa reprezentuj�ca plansz� szachownicy
  *
  * Zawiera metody odpowiedzialne za pocz�tkowe u�o�enie figur, wy�wietlanie szachownicy
  * po ka�dym ruchu, weryfikacj� poprawno�ci ruch�w czy samo wykonywanie ruchu figur.
  *
  * @author Klaudia �owicka
  * @date Wrzesie� 2008
  */

#include "square.h"
#include <iostream>


class Board
{
public:
    /** Metoda pozwalaj�ca na odwo�ywanie si� do pozosta�ych metod klasy
      * bez konieczno�ci tworzenia obiektu na zewn�trz klasy*/
    static Board* getBoard();

    /** Pozwala odwo�a� si� do klasy Square, czyli klasy pojedynczego pola planszy
      * @param x - wsp�rz�dna x pola planszy
      * @param y - wsp�rz�dna y pola planszy */
	Square* getSquare(int x, int y) {
		return &square[x][y];
	}

    /** Pozwala utworzy� pojedyncze pole planszy
      * @param x - wsp�rz�dna x pola planszy
      * @param y - wsp�rz�dna y pola planszy */
	void setSquare(Square *s, int x, int y){
		square[x][y]=*s;
	}

	/** Metoda pyta u�ytkownika o wsp�rz�dne figur w celu wykonania ruchu.
      * Weryfikuje czy podane dane s� poprawne, tzn. czy istniej� dane pola
      * lub czy pola nie s� puste - nast�pnie odwo�uje si� do metod weryfikuj�cych
      * poprawno�� ruchu dla danej figury */
	bool doMove();

	/** Ustala pocz�tkowe po�o�enie figur na szachownicy */
	void setBoard();

	/** Wy�wietla plansz� i rozpoczyna gr� - wywo�uje funkcj� doMove() */
	bool playGame();

	/** Sprawdza czy wszystkie pola w linii poziomej od pola startowego
      * do pola ko�cowego s� puste (tzn. nie zawieraj� figur)
      * @param thisPiece - wsp�rz�dne pola pocz�tkowego (podawane przez u�ytkownika)
      * @param thatSpace - wsp�rz�dne pola ko�cowego (podawane przez u�ytkownika) */
	bool isClearHorizontal(Square* thisPiece, Square* thatSpace);

	/** Sprawdza czy wszystkie pola w linii pionowej od pola startowego
      * do pola ko�cowego s� puste (tzn. nie zawieraj� figur)
      * @param thisPiece - wsp�rz�dne pola pocz�tkowego (podawane przez u�ytkownika)
      * @param thatSpace - wsp�rz�dne pola ko�cowego (podawane przez u�ytkownika) */
	bool isClearVertical(Square* thisPiece, Square* thatSpace);

	/** Sprawdza czy wszystkie pola w linii uko�nej od pola startowego
      * do pola ko�cowego s� puste (tzn. nie zawieraj� figur)
      * @param thisPiece - wsp�rz�dne pola pocz�tkowego (podawane przez u�ytkownika)
      * @param thatSpace - wsp�rz�dne pola ko�cowego (podawane przez u�ytkownika) */
	bool isClearDiagonal(Square* thisPiece, Square* thatSpace);

private:
    /** Utworzenie obiektu tej klasy */
    static Board* _theBoard;
    /** Utworzenie liczby p�l szachownicy */
    Square square[8][8];
    /** Okre�lenie koloru figur, kt�re rozpoczynaj� gr� */
	Color turn=WHITE;
	/** Wy�wietlenie na ekranie szachownicy */
	void printBoard();
	/** Wykonanie ruchu figury z pola pocz�tkowego do pola ko�cowego
	  * - wszystkie parametry podawane s� przez u�ytkownika przy wywo�aniu metody doMove()
      * @ param x1 - wsp�rz�dne x pola pocz�tkowego
      * @ param y1 - wsp�rz�dne y pola pocz�tkowego
      * @ param x1 - wsp�rz�dne x pola ko�cowego
      * @ param x1 - wsp�rz�dne y pola ko�cowego*/
	bool makeMove(int x1, int y1, int x2, int y2);

};

#endif // BOARD_H
