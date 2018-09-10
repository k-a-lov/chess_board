#include <iostream>
#include <string>

#include "board.h"

using namespace std;


int main()
{

    Board::getBoard()->setBoard();
    while (Board::getBoard()->playGame());

	return 0;
}
