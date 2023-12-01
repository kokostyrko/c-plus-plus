#pragma once
#include "board.h"
#include <iostream>

class Move
{
public:
    int x;
    int y;
    char symbol;

    Move();
    Move(const Move &other);
    Move(int initialX, int initialY, char initialSymbol);

    Move &operator=(const Move &other);
    bool operator==(const Move &other) const;
    friend std::istream &operator>>(std::istream &input, Move &move);
    friend std::ostream &operator<<(std::ostream &output, const Move &move);

    // выполняет ход игрока
    void makeMove(Board &board, int x, int y, int currentPlayer);
};