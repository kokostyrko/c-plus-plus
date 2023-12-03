#pragma once
#include "board.h"
#include "player.h"
#include <iostream>
#include <vector>

class Logic
{
private:
    Board board;
    std::vector<Player> players;
    int currentPlayer;

public:
    Logic();
    Logic(const Logic &other);
    Logic(const Board &initialBoard, const std::vector<Player> &initialPlayers);

    Logic &operator=(const Logic &other);
    bool operator==(const Logic &other) const;

    friend std::istream &operator>>(std::istream &input, Logic &logic);
    friend std::ostream &operator<<(std::ostream &output, const Logic &logic);

    const Board &getBoard() const;
    int getCurrentPlayer() const;

    void startGame();
    bool isGameOver();
    int getWinner();
};