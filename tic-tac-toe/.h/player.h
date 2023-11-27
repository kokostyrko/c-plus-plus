#pragma once

class Player
{
    private:
    char symbol;

    public:
    Player(char symbol);

    //const, так как не изменяем состояние объекта, а просто возвращаем текущий символ
    char getSymbol() const;
};