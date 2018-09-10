#ifndef BOARD_H
#define BOARD_H

/**@brief Klasa reprezentuj¹ca planszê szachownicy
  *
  * Zawiera metody odpowiedzialne za pocz¹tkowe u³o¿enie figur, wyœwietlanie szachownicy
  * po ka¿dym ruchu, weryfikacjê poprawnoœci ruchów czy samo wykonywanie ruchu figur.
  *
  * @author Klaudia £owicka
  * @date Wrzesieñ 2008
  */

#include "square.h"
#include <iostream>


class Board
{
public:
    /** Metoda pozwalaj¹ca na odwo³ywanie siê do pozosta³ych metod klasy
      * bez koniecznoœci tworzenia obiektu na zewn¹trz klasy*/
    static Board* getBoard();

    /** Pozwala odwo³aæ siê do klasy Square, czyli klasy pojedynczego pola planszy
      * @param x - wspó³rzêdna x pola planszy
      * @param y - wspó³rzêdna y pola planszy */
	Square* getSquare(int x, int y) {
		return &square[x][y];
	}

    /** Pozwala utworzyæ pojedyncze pole planszy
      * @param x - wspó³rzêdna x pola planszy
      * @param y - wspó³rzêdna y pola planszy */
	void setSquare(Square *s, int x, int y){
		square[x][y]=*s;
	}

	/** Metoda pyta u¿ytkownika o wspó³rzêdne figur w celu wykonania ruchu.
      * Weryfikuje czy podane dane s¹ poprawne, tzn. czy istniej¹ dane pola
      * lub czy pola nie s¹ puste - nastêpnie odwo³uje siê do metod weryfikuj¹cych
      * poprawnoœæ ruchu dla danej figury */
	bool doMove();

	/** Ustala pocz¹tkowe po³o¿enie figur na szachownicy */
	void setBoard();

	/** Wyœwietla planszê i rozpoczyna grê - wywo³uje funkcjê doMove() */
	bool playGame();

	/** Sprawdza czy wszystkie pola w linii poziomej od pola startowego
      * do pola koñcowego s¹ puste (tzn. nie zawieraj¹ figur)
      * @param thisPiece - wspó³rzêdne pola pocz¹tkowego (podawane przez u¿ytkownika)
      * @param thatSpace - wspó³rzêdne pola koñcowego (podawane przez u¿ytkownika) */
	bool isClearHorizontal(Square* thisPiece, Square* thatSpace);

	/** Sprawdza czy wszystkie pola w linii pionowej od pola startowego
      * do pola koñcowego s¹ puste (tzn. nie zawieraj¹ figur)
      * @param thisPiece - wspó³rzêdne pola pocz¹tkowego (podawane przez u¿ytkownika)
      * @param thatSpace - wspó³rzêdne pola koñcowego (podawane przez u¿ytkownika) */
	bool isClearVertical(Square* thisPiece, Square* thatSpace);

	/** Sprawdza czy wszystkie pola w linii ukoœnej od pola startowego
      * do pola koñcowego s¹ puste (tzn. nie zawieraj¹ figur)
      * @param thisPiece - wspó³rzêdne pola pocz¹tkowego (podawane przez u¿ytkownika)
      * @param thatSpace - wspó³rzêdne pola koñcowego (podawane przez u¿ytkownika) */
	bool isClearDiagonal(Square* thisPiece, Square* thatSpace);

private:
    /** Utworzenie obiektu tej klasy */
    static Board* _theBoard;
    /** Utworzenie liczby pól szachownicy */
    Square square[8][8];
    /** Okreœlenie koloru figur, które rozpoczynaj¹ grê */
	Color turn=WHITE;
	/** Wyœwietlenie na ekranie szachownicy */
	void printBoard();
	/** Wykonanie ruchu figury z pola pocz¹tkowego do pola koñcowego
	  * - wszystkie parametry podawane s¹ przez u¿ytkownika przy wywo³aniu metody doMove()
      * @ param x1 - wspó³rzêdne x pola pocz¹tkowego
      * @ param y1 - wspó³rzêdne y pola pocz¹tkowego
      * @ param x1 - wspó³rzêdne x pola koñcowego
      * @ param x1 - wspó³rzêdne y pola koñcowego*/
	bool makeMove(int x1, int y1, int x2, int y2);

};

#endif // BOARD_H
