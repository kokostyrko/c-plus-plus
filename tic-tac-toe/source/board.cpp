#include "../include/board.h"
#include <iostream>

Board::Board()
{
    width = 10;
    height = 10;

    cells = new char *[height];
    for (int i = 0; i < height; i++)
    {
        cells[i] = new char[width];
        for (int j = 0; j < width; j++)
        {
            cells[i][j] = ' ';
        }
    }
}

Board::Board(const Board &other)
{
    width = other.width;
    height = other.height;

    cells = new char *[height];
    for (int i = 0; i < height; i++)
    {
        cells[i] = new char[width];
        for (int j = 0; j < width; j++)
        {
            cells[i][j] = other.cells[i][j];
        }
    }
}

Board::Board(int initialWidth, int initialHeight, char **initialCells)
{
    width = initialWidth;
    height = initialHeight;

    cells = new char *[height];
    for (int i = 0; i < height; i++)
    {
        cells[i] = new char[width];
        for (int j = 0; j < width; j++)
        {
            cells[i][j] = initialCells[i][j];
        }
    }
}

Board &Board::operator=(const Board &other)
{
    if (this != &other)
    {
        // Освобождаем старые ресурсы
        for (int i = 0; i < height; i++)
        {
            delete[] cells[i];
        }
        delete[] cells;

        width = other.width;
        height = other.height;

        cells = new char *[height];
        for (int i = 0; i < height; i++)
        {
            cells[i] = new char[width];
            for (int j = 0; j < width; j++)
            {
                cells[i][j] = other.cells[i][j];
            }
        }

        return *this;
    }
}

bool Board::operator==(const Board &other) const
{
    if (width == other.width && height == other.height)
    {
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if (cells[i][j] != other.cells[i][j])
                {
                    return false;
                }
            }
        }

        return true;
    }

    return false;
}

std::istream &operator>>(std::istream &input, Board &board)
{
    std::cout << "Enter width and height: ";
    input >> board.width >> board.height;

    return input;
}

std::ostream &operator<<(std::ostream &output, const Board &board)
{
    for (int i = 0; i < board.getHeight(); i++)
    {
        for (int j = 0; j < board.getWidth(); j++)
        {
            output << board.getCells()[i][j] << " ";
        }
        output << std::endl;
    }

    return output;
}

int Board::getHeight() const
{
    return height;
}

int Board::getWidth() const
{
    return width;
}

char **Board::getCells() const
{
    return cells;
}

void Board::print()
{
}