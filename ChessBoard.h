#ifndef DESKTOP_CHESSBOARD_H
#define DESKTOP_CHESSBOARD_H

#define col 15
#define row 15

#include<iostream>
using namespace std;

class ChessBoard
{
public:
	char chequer[row][col];
    ChessBoard();
    void display();
};
#endif

