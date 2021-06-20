#ifndef DESKTOP_PLAYER_H
#define DESKTOP_PLAYER_H

#include"ChessBoard.h"
#include<iostream>
#include<string>
using namespace std;
#define Traverse 0
#define Erect 1
#define LowerLeftToUpperRight 2
#define LowerRightToUpperLeft 3

class Player {
private:
    string p_name;
    char p_type;
    int p_x, p_y;
    ChessBoard* m_ptBoard;
public:

    Player(string name,char chessType):p_name(name),p_type(chessType),m_ptBoard(NULL){}
    void setChess();
    void attachToBoard(ChessBoard* ptBoard){m_ptBoard=ptBoard;}
    bool isInChessBoard(int x,int y);
    bool setLine(int x,int y);
    bool setWin();
    
};


#endif 
