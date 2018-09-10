#ifndef BOARD_H
#define BOARD_H

#include "square.h"
#include <iostream>


class Board
{
public:
    static Board* getBoard();
	Square* getSquare(int x, int y) {
		return &square[x][y];
	}
	void setSquare(Square *s, int x, int y){
		square[x][y]=*s;
	}
	bool doMove();
	void setBoard();
	bool playGame();
	bool isClearHorizontal(Square* thisPiece, Square* thatSpace);
	bool isClearVertical(Square* thisPiece, Square* thatSpace);
	bool isClearDiagonal(Square* thisPiece, Square* thatSpace);

private:
    static Board* _theBoard;
    Square square[8][8];
	Color turn=WHITE;
	void printBoard();
	bool moveKing(Square* thisKing, Square* thatSpace);
	bool moveQueen(Square* thisQueen, Square* thatSpace);
	bool moveKnight(Square* thisKnight, Square* thatSpace);
	bool makeMove(int x1, int y1, int x2, int y2);

};

#endif // BOARD_H
