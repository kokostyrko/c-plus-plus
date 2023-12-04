#include "../include/move.h"
#include <iostream>

/**
 * @brief Default constructor.
 *
 * Creates an object of class Move with coordinates (0, 0)
 * and the symbol ('X').
 */
Move::Move()
{
    x = 0;
    y = 0;
    symbol = 'X';
}

/**
 * @brief Copy constructor.
 * @param other The move to copy.
 *
 * Creates a new move with the same values as the provided move.
 */
Move::Move(const Move &other)
{
    x = other.x;
    y = other.y;
    symbol = other.symbol;
}

/**
 * @brief Parameterized constructor.
 * @param initialX The initial x-coordinate of the move.
 * @param initialY The initial y-coordinate of the move.
 * @param initialSymbol The symbol for initializing a move.
 *
 * Initializes the move with the specified values.
 */
Move::Move(int initialX, int initialY, char initialSymbol)
{
    x = initialX;
    y = initialY;
    symbol = initialSymbol;
}

/**
 * @brief Assignment operator.
 * @param other A reference to another object of the Move class.
 * @return A reference to the modified move.
 *
 * Assigns the values of another Move object to the current move.
 */
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

/**
 * @brief Equality operator.
 * @param other The move to compare with.
 * @return True if the moves have the same values, false otherwise.
 *
 * Checks if two moves have the same values.
 */
bool Move::operator==(const Move &other) const
{
    return x == other.x && y == other.y && symbol == other.symbol;
}

/**
 * @brief Input stream operator.
 * @param input The input stream.
 * @param move The move to populate.
 * @return The input stream.
 *
 * Inputs data for a Move class object from the input stream.
 */
std::istream &operator>>(std::istream &input, Move &move)
{
    std::cout << "Enter move coordinates (x y) and symbol: ";
    input >> move.x >> move.y >> move.symbol;

    return input;
}

/**
 * @brief Output stream operator.
 * @param output The output stream.
 * @param move A reference to an object of the Move class.
 * @return The output stream.
 *
 * Prints the data of a Move class object to the output stream.
 */
std::ostream &operator<<(std::ostream &output, Move &move)
{
    output << "Move coordinates: (" << move.x << ", " << move.y << ")" << std::endl;
    output << "Symbol: " << move.symbol;

    return output;
}

/**
 * @brief Executes the player's move on the game board.
 * @param board The game board.
 * @param x The x-coordinate of the move.
 * @param y The y-coordinate of the move.
 * @param currentPlayer The index of the current player.
 */
void Move::makeMove(Board &board, int x, int y, int currentPlayer)
{
}