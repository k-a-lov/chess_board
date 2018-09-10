#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>

class Piece;

using namespace std;

enum Color { WHITE, BLACK, NONE };

class Square
{
public:
    //Konstruktor
    Square();

	void setOccupier(Piece* piece);
	Piece* occupiedBy() const;
	bool occupied() const;

	void setX(int ex) { x = ex; }
	void setY(int why) { y = why; }
	int getX() { return x; }
	int getY() { return y; }

private:
	int x, y;
	Piece* _piece;
};

#endif // SQUARE_H
