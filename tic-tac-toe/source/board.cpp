#include "../include/board.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

Board::Board()
{
    width = 10;
    height = 10;
    cells = std::vector<std::string>(height, std::string(width, ' '));
}

Board::Board(const Board &other)
{
    width = other.width;
    height = other.height;
    cells = other.cells;
}

Board::Board(int initialWidth, int initialHeight,
             const std::vector<std::string> &initialCells)
{
    width = initialWidth;
    height = initialHeight;
    cells = initialCells;
}

Board &Board::operator=(const Board &other)
{
    if (this != &other)
    {
        width = other.width;
        height = other.height;
        cells = other.cells;

        return *this;
    }
}

bool Board::operator==(const Board &other) const
{
    return width == other.width && height == other.height && cells == other.cells;
}

std::istream &operator>>(std::istream &input, Board &board)
{
    std::cout << "Enter width and height: ";
    input >> board.width >> board.height;

    // перезапись вектора строк при вводе новых размеров поля.
    board.cells.assign(board.height, std::string(board.width, ' '));

    return input;
}

std::ostream &operator<<(std::ostream &output, const Board &board)
{
    // использую алгоритм for_each для итерации по элементам
    // вектора board.cells и вывода каждой строки
    // в поток вывода output.
    std::for_each(board.cells.begin(), board.cells.end(),
                  [&output](const std::string &row)
                  { output << row << std::endl; });
}

void Board::print()
{
    // Реализация вывода игрового поля на экран
}