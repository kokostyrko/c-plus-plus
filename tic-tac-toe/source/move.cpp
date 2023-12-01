#include "../include/move.h"
#include <iostream>

Move::Move()
{
    x = 0;
    y = 0;
    symbol = 'X';
}

Move::Move(const Move &other)
{
    x = other.x;
    y = other.y;
    symbol = other.symbol;
}

Move::Move(int initialX, int initialY, char initialSymbol)
{
    x = initialX;
    y = initialY;
    symbol = initialSymbol;
}

Move &Move::operator=(const Move &other)
{
    if (this != &other)
    {
        x = other.x;
        y = other.y;
        symbol = other.symbol;
    }

    return *this;
}

bool Move::operator==(const Move &other) const
{
    return x == other.x && y == other.y && symbol == other.symbol;
}

std::istream &operator>>(std::istream &input, Move &move)
{
    std::cout << "Enter move coordinates (x y) and symbol: ";
    input >> move.x >> move.y >> move.symbol;

    return input;
}

std::ostream &operator<<(std::ostream &output, Move &move)
{
    output << "Move coordinates: (" << move.x << ", " << move.y << ")" << std::endl;
    output << "Symbol: " << move.symbol;

    return output;
}

void Move::makeMove(Board &board, int x, int y, int currentPlayer)
{
}