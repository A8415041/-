#include "ChessBoard.h"
ChessBoard::ChessBoard()
{
    
    for(int j=0;j<col;j++){
        chequer[0][j]=chequer[row-1][j]='-';
    }
    for(int i=1;i<row;i++){
        chequer[i][0]=chequer[i][col-1]='|';
    }
    for(int i=1;i<row-1;i++){
        for(int j=1;j<col-1;j++){
            chequer[i][j]=' ';
        }
    }
}

void ChessBoard::display()
{
    for(int i=0;i<row;i++)
    {  for(int j=0;j<col;j++)
            cout<<chequer[i][j]<<' ';
        cout<<endl;
    }
}

