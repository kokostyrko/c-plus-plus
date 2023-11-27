#pragma once
#include "board.h"
#include "player.h"

class Logic
{
private:
    Board board;
    Player *players[2];
    int currentPlayer;

public:
    Logic() = default;

    void startGame();
    bool isGameOver();
    int getWinner();
};