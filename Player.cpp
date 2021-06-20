#include "Player.h"
#include<cmath>

void Player::setChess()
{
    cout << "請輸入玩家" << p_name << "的x座標和y座標：" << endl;
    while(!(cin >> p_x) || !(cin >> p_y) || m_ptBoard->chequer[p_x][p_y]!=' ')
    {
        cin.clear();
        cin.ignore();
        cout<<"輸入有誤，請再次輸入玩家"<<p_name<<"的x座標和y座標："<<endl;
    }


    if(isInChessBoard(p_x,p_y))
        m_ptBoard->chequer[p_x][p_y]=p_type;
}

bool Player::isInChessBoard(int x,int y)
{
    if(x>0 && y>0 && y<col-1 && x<row-1)
        return true;
    else
        return false;
}

bool Player::setLine(int x,int y)
{
    for(int path=Traverse;path<=LowerRightToUpperLeft;path++)
    {
        int tX,tY,tot=1;
        for(int i=-4;i<=4;i++)
        {
            if(i==0)continue;
            switch(path)
            {
                case Traverse:
                    tX=x;  tY=y+i;   break;
                case Erect:
                    tX=x+i; tY=y;    break;
                case LowerLeftToUpperRight:
                    tX=x-i; tY=y+i;   break;
                case LowerRightToUpperLeft:
                    tX=x+i; tY=y+i;   break;
            }
            if(isInChessBoard(tX,tY) && m_ptBoard->chequer[tX][tY]==p_type)
                tot++;
            else
                tot=0;
            if(tot==5)
                return true;
        }
    }return false;
}

bool Player::setWin()
{
    return setLine(p_x,p_y)?true:false;
}

