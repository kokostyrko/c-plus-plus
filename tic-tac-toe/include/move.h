#pragma once

/**
 * @author Cocostirco Alexandra
 * @date 2023
 * @project tic-tac-toe
 */

#include "board.h"
#include <iostream>

/**
 * @class Move
 * @brief Represents a player's move on the game board.
 *
 * This class defines the structure and
 * functionality for working with moves in the game.
 */
class Move
{
public:
    int x;       /**< The x-coordinate of the move. */
    int y;       /**< The y-coordinate of the move. */
    char symbol; /**< The symbol associated with the move. */

    /**
     * @brief Default constructor.
     */
    Move();

    /**
     * @brief Copy constructor.
     * @param other The move to copy.
     */
    Move(const Move &other);

    /**
     * @brief Parameterized constructor.
     * @param initialX The initial x-coordinate of the move.
     * @param initialY The initial y-coordinate of the move.
     * @param initialSymbol The symbol for initializing a move.
     */
    Move(int initialX, int initialY, char initialSymbol);

    /**
     * @brief Assignment operator.
     * @param other A reference to another object of the Move class.
     * @return A reference to the modified move.
     */
    Move &operator=(const Move &other);

    /**
     * @brief Equality operator.
     * @param other The move to compare with.
     * @return True if the moves have the same values, false otherwise.
     */
    bool operator==(const Move &other) const;

    /**
     * @brief Input stream operator.
     * @param input The input stream.
     * @param move The move to populate.
     * @return A reference to the input stream.
     */
    friend std::istream &operator>>(std::istream &input, Move &move);

    /**
     * @brief Output stream operator.
     * @param output The output stream.
     * @param move A reference to an object of the Move class.
     * @return A reference to the output stream.
     */
    friend std::ostream &operator<<(std::ostream &output, const Move &move);

    /**
     * @brief Executes the player's move on the game board.
     * @param board The game board.
     * @param x The x-coordinate of the move.
     * @param y The y-coordinate of the move.
     * @param currentPlayer The index of the current player.
     */
    // выполняет ход игрока
    void makeMove(Board &board, int x, int y, int currentPlayer);
};