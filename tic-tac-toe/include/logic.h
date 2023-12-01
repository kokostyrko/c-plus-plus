#pragma once
#include "board.h"
#include "player.h"
#include <iostream>

class Logic
{
private:
    Board board;
    Player *players[2];
    int currentPlayer;

public:
    Logic();
    Logic(const Logic &other);
    Logic(const Board &initialBoard, const Player *initialPlayer1,
          const Player *initialPlayer2);

    Logic &operator=(const Logic &other);
    bool operator==(const Logic &other) const;
    friend std::istream &operator>>(std::istream &input, Logic &logic);
    friend std::ostream &operator<<(std::ostream &output, const Logic &logic);

    const Board &getBoard() const;
    const Player *getPlayer(int index) const;
    int getCurrentPlayer() const;

    void startGame();
    bool isGameOver();
    int getWinner();
};