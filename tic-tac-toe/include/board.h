#pragma once
#include <iostream>

class Board
{
private:
    int width;
    int height;
    /*указатель на массив указателей (символов), где каждый указатель представляет строку символов
    (определяет игровое поле)*/
    char **cells;

public:
    Board();
    Board(const Board &other);
    Board(int initialWidth, int initialHeight, char **initialCells);

    Board &operator=(const Board &other);
    bool operator==(const Board &other) const;
    friend std::istream &operator>>(std::istream &input, Board &board);
    friend std::ostream &operator<<(std::ostream &output, const Board &board);

    int getHeight() const;
    int getWidth() const;
    char **getCells() const;

    // выводит игровое поле на экран
    void print();
};