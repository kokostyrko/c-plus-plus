#pragma once
#include <iostream>
#include <vector>
#include <string>

class Board
{
private:
    int width;
    int height;
    std::vector<std::string> cells;

public:
    Board();
    Board(const Board &other);
    Board(int initialWidth, int initialHeight, const std::vector<std::string> &initialCells);

    Board &operator=(const Board &other);
    bool operator==(const Board &other) const;

    friend std::istream &operator>>(std::istream &input, Board &board);
    friend std::ostream &operator<<(std::ostream &output, const Board &board);

    void print();
};