#include "../include/board.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

/**
 * @brief Default constructor.
 *
 * Initializes the board with width and height (10x10) and
 * fills it with spaces.
 */
Board::Board()
{
    width = 10;
    height = 10;
    cells = std::vector<std::string>(height, std::string(width, ' '));
}

/**
 * @brief Copy constructor.
 * @param other The board to copy.
 *
 * Copies the dimensions and cells of another Board class object.
 */
Board::Board(const Board &other)
{
    width = other.width;
    height = other.height;
    cells = other.cells;
}

/**
 * @brief Parameterized constructor.
 * @param initialWidth The initial width of the board.
 * @param initialHeight The initial height of the board.
 * @param initialCells The initial state of the board cells.
 *
 * Creates an object of the Board class with the given parameters.
 */
Board::Board(int initialWidth, int initialHeight,
             const std::vector<std::string> &initialCells)
{
    width = initialWidth;
    height = initialHeight;
    cells = initialCells;
}

/**
 * @brief Assignment operator.
 * @param other A reference to another object of the Board class.
 * @return A reference to the modified board.
 *
 * Assigns the contents of another Board object to the current board.
 */
Board &Board::operator=(const Board &other)
{
    if (this != &other)
    {
        width = other.width;
        height = other.height;
        cells = other.cells;
    }

    return *this;
}

/**
 * @brief Equality operator.
 * @param other The board to compare with.
 * @return True if the boards are equal, false otherwise.
 *
 * Checks if two boards are equal.
 */
bool Board::operator==(const Board &other) const
{
    return width == other.width && height == other.height && cells == other.cells;
}

/**
 * @brief Input stream operator.
 * @param input The input stream.
 * @param board The board to populate.
 * @return Reference to the input stream.
 *
 * Inputs data for a Board class object from the input stream.
 */
std::istream &operator>>(std::istream &input, Board &board)
{
    std::cout << "Enter width and height: ";
    input >> board.width >> board.height;

    // перезапись вектора строк при вводе новых размеров поля.
    board.cells.assign(board.height, std::string(board.width, ' '));

    return input;
}

/**
 * @brief Output stream operator.
 * @param output The output stream.
 * @param board A reference to an object of the Board class.
 * @return The output stream.
 *
 * Prints the data of a Board class object to the output stream.
 */
std::ostream &operator<<(std::ostream &output, const Board &board)
{
    // использую алгоритм for_each для итерации по элементам
    // вектора board.cells и вывода каждой строки
    // в поток вывода output.
    std::for_each(board.cells.begin(), board.cells.end(),
                  [&output](const std::string &row)
                  { output << row << std::endl; });
    
    return output;
}

/**
 * @brief Print function.
 *
 * Prints the board to the console.
 */
void Board::print()
{
    // Реализация вывода игрового поля на экран
}