#include"ChessBoard.h"
#include"Player.h"

int main()
{
    ChessBoard board;
    Player pA("A",'o');
    pA.attachToBoard(&board);
    
    Player pB("B",'@');
    pB.attachToBoard(&board);
    board.display();
    while(1){
        pA.setChess();//玩家A放下一個棋子
        board.display();
        if(pA.setWin()){
            cout<<"A is Winer!";
            break;
        }

        pB.setChess();//玩家B放下一個棋子
        board.display();
        if(pB.setWin()){
            cout<<"B is Winer!";
            break;
        }
    }
    
}
