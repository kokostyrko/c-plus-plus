#pragma once
#include "board.h"

class Move
{
    public:
    int x;
    int y;
    char symbol;

    Move(int x, int y);

    //выполняет ход игрока
    void makeMove(Board& board, int currentPlayer);
};
