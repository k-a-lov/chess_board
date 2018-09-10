#include "board.h"
#include "square.h"
#include "pawn.h"
#include "rook.h"
#include "bishop.h"
#include "knight.h"
#include "queen.h"
#include "king.h"

#include <map>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

Board* Board::getBoard()
{
    if (!_theBoard)
        _theBoard = new Board();
    return _theBoard;
}

void Board::printBoard() {


	cout << endl << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << " " << 8-i << "   ";
		for (int j = 0; j < 8; j++)
		{

            if(square[i][j].occupied())
                {square[i][j].occupiedBy()->display();}
            else cout << "     |";

		}
		cout << "\n\n";

	}
	cout << "       A     B     C     D     E     F     G     H " << "\n\n";

	cout << "\n\n";
}

bool Board::doMove() {
	string toSquare, fromSquare;
	int x1, x2, y1, y2;
	bool stop = false;

	map<char, int> board_references = {
            { 'A', 0 },
            { 'B', 1 },
            { 'C', 2 },
            { 'D', 3 },
            { 'E', 4 },
            { 'F', 5 },
            { 'G', 6 },
            { 'H', 7 },
            { '1', 7 },
            { '2', 6 },
            { '3', 5 },
            { '4', 4 },
            { '5', 3 },
            { '6', 2 },
            { '7', 1 },
            { '8', 0 }
        };

	while (!stop)
	{
	    	bool st_from = false;
            bool st_to = false;

            (turn == WHITE) ? cout << "Kolej figur BIALYCH\n\n" : cout << "Kolej figur CZARNYCH\n\n";

           while(!st_from){

                cout << "Pole figury, ktora chcesz ruszyc (np. A8): ";
                cin >> fromSquare;

                if(fromSquare.length() < 3){

                    x1 = board_references.find(fromSquare.back())->second;
                    y1 = board_references.find(toupper(fromSquare.front()))->second;

                    if(getSquare(x1, y1)->occupied()){
                        if ((turn==WHITE && getSquare(x1, y1)->occupiedBy()->isWhite())
                            || (turn!=WHITE && !getSquare(x1, y1)->occupiedBy()->isWhite())){
                                if(x1 > 8 || y1 > 8 || isdigit(fromSquare.front()) || !isdigit(fromSquare.back())){
                                    cout << "Takie pole nie istnieje! \n";
                                }
                                else{
                                    st_from = true;
                                }
                            }
                        else
                            cout << "To nie jest Twoj pionek. Sprobuj jeszcze raz." << endl;
                    }
                    else cout << "Podaj poprawne pole!\n";
                }
                else cout << "Podaj poprawne pole!\n";
            }

            while(!st_to){
                cout << "Dokad chcesz sie ruszyc? (np. B5): ";
                cin >> toSquare;

                if(toSquare.length() < 3){
                    x2 = board_references.find(toSquare.back())->second;
                    y2 = board_references.find(toupper(toSquare.front()))->second;

                    if ((turn==WHITE && getSquare(x1, y1)->occupiedBy()->isWhite())
                        || (turn!=WHITE && !getSquare(x1, y1)->occupiedBy()->isWhite())){

                        if(x2 > 8 || y2 > 8 || isdigit(toSquare.front()) || !isdigit(toSquare.back())){
                            cout << "Takie pole nie istnieje! \n";
                        }
                        else{
                            st_to = true;
                        }
                    }
                    else
                        cout << "To nie jest Twoj pionek. Sprobuj jeszcze raz." << endl;
                }
                else cout << "Podaj poprawne pole!\n";
            }

            if (makeMove(x1, y1, x2, y2) == false)
            {
                cout << "Ruch niedozwolony. Sprobuj jeszcze raz." << endl;
            }
            else
                stop = true;

	}

	if (turn == BLACK){
		turn = WHITE;}
	else
		turn = BLACK;

	return true;

}

void Board::setBoard()
{
    Piece* aPiece;

    aPiece = new Rook(true);
    square[7][0].setOccupier(aPiece);
    aPiece = new Rook(false);
    square[0][0].setOccupier(aPiece);
    aPiece = new Rook(true);
    square[7][7].setOccupier(aPiece);
    aPiece = new Rook(false);
    square[0][7].setOccupier(aPiece);

    aPiece = new Knight(true);
    square[7][1].setOccupier(aPiece);
    aPiece = new Knight(false);
    square[0][1].setOccupier(aPiece);
    aPiece = new Knight(true);
    square[7][6].setOccupier(aPiece);
    aPiece = new Knight(false);
    square[0][6].setOccupier(aPiece);

    aPiece = new Bishop(true);
    square[7][2].setOccupier(aPiece);
    aPiece = new Bishop(false);
    square[0][2].setOccupier(aPiece);
    aPiece = new Bishop(true);
    square[7][5].setOccupier(aPiece);
    aPiece = new Bishop(false);
    square[0][5].setOccupier(aPiece);

    aPiece = new Queen(true);
    square[7][3].setOccupier(aPiece);
    aPiece = new Queen(false);
    square[0][3].setOccupier(aPiece);

    aPiece = new King(true);
    square[7][4].setOccupier(aPiece);
    aPiece = new King(false);
    square[0][4].setOccupier(aPiece);

	aPiece = new Pawn(true);
	for (int i = 0; i < 8; i++)
	{
		square[6][i].setOccupier(aPiece);
	}

	aPiece = new Pawn(false);
	for (int i = 0; i < 8; i++)
	{
		square[1][i].setOccupier(aPiece);
	}

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
		{
			square[i][j].setX(i);
			square[i][j].setY(j);
		}

}

bool Board::playGame()
{
	printBoard();
	return doMove();

}

bool Board::isClearHorizontal(Square* thisPiece, Square* thatSpace){

    int pieceX = thisPiece->getX();
	int pieceY = thisPiece->getY();
	int thatY = thatSpace->getY();
	int j;
	bool valid = true;

	if (pieceY < thatY){

        for(j = pieceY + 1; j < thatY; j++ ){

            if (getSquare(pieceX, j)->occupied()){
                valid = false;
            }
        }
	}
	else{
        for(j = pieceY - 1; j > thatY; j-- ){

            if (getSquare(pieceX, j)->occupied()){
                valid = false;
            }
        }
	}
	return valid;


}

bool Board::isClearVertical(Square* thisPiece, Square* thatSpace){

    int pieceX = thisPiece->getX();
	int pieceY = thisPiece->getY();
	int thatX = thatSpace->getX();
	int i;
	bool valid = true;

	if (pieceX < thatX){

        for(i = pieceX + 1; i < thatX; i++ ){

            if (getSquare(i, pieceY)->occupied()){
                valid = false;
            }
        }
	}
	else{
        for(i = pieceX - 1; i > thatX; i-- ){

            if (getSquare(i, pieceY)->occupied()){
                valid = false;
            }
        }
	}
	return valid;
}

bool Board::isClearDiagonal(Square* thisPiece, Square* thatSpace){


    int pieceX = thisPiece->getX();
	int pieceY = thisPiece->getY();
	int thatX = thatSpace->getX();
	int thatY = thatSpace->getY();
	int i;
	bool valid = true;

	if (pieceX > thatX && pieceY < thatY){

            for(i = 1; i < (thatY - pieceY); i++){

                if (getSquare(pieceX - i, pieceY + i)->occupied()){
                    valid = false;
                }
            }
	}
	else if (pieceX > thatX && pieceY > thatY){
         for(i = 1; i < (pieceY - thatY); i++){

                if (getSquare(pieceX - i, pieceY - i)->occupied()){
                    valid = false;
                }
            }
	}
	else if (pieceX < thatX && pieceY < thatY){
         for(i = 1; i < (thatY - pieceY); i++){

                if (getSquare(pieceX + i, pieceY + i)->occupied()){
                    valid = false;
                }
            }
	}
	else if (pieceX < thatX && pieceY > thatY){
         for(i = 1; i < (pieceY - thatY); i++){

                if (getSquare(pieceX + i, pieceY - i)->occupied()){
                    valid = false;
                }
            }
	}
	return valid;
}

bool Board::makeMove(int x1, int y1, int x2, int y2) {

	Square* src = getSquare(x1, y1);
	Square* dest = getSquare(x2, y2);

	if ((src->occupiedBy()->isWhite() && dest->occupied() && dest->occupiedBy()->isWhite())
     || (!src->occupiedBy()->isWhite() && dest->occupied() && !dest->occupiedBy()->isWhite()))
	{
		std::cout << "To pole jest zajete przez Twoj wlasny pionek." << std::endl;
		return false;
	}

    if(src->occupiedBy()->moveTo(src, dest)){
        dest->setOccupier(src->occupiedBy());
        src->setOccupier(NULL);
        return true;
    }

	return false;
}

Board* Board::_theBoard = NULL;
