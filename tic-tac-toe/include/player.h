#pragma once
#include <iostream>
#include <string>

class Player
{
private:
    char symbol;

public:
    Player();
    Player(const Player &other);
    Player(char initialSymbol);

    Player &operator=(const Player &other);
    bool operator==(const Player &other) const;

    friend std::istream &operator>>(std::istream &input, Player &player);
    friend std::ostream &operator<<(std::ostream &output, const Player &player);

    // const, так как не изменяем состояние объекта, а просто возвращаем текущий символ
    char getSymbol() const;
};