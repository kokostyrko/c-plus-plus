#include "../include/player.h"
#include <iostream>

Player::Player()
{
    symbol = 'X';
}

Player::Player(const Player &other)
{
    symbol = other.symbol;
}

Player::Player(char initialSymbol)
{
    symbol = initialSymbol;
}

Player &Player::operator=(const Player &other)
{
    if (this != &other)
    {
        symbol = other.symbol;
    }

    return *this;
}

bool Player::operator==(const Player &other) const
{
    return symbol == other.symbol;
}

std::istream &operator>>(std::istream &input, Player &player)
{
    std::cout << "Enter player symbol: ";
    input >> player.symbol;

    return input;
}

std::ostream &operator<<(std::ostream &output, const Player &player)
{
    output << "Player symbol: " << player.symbol;

    return output;
}

char Player::getSymbol() const
{
    return symbol;
}