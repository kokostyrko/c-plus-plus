#pragma once

/**
 * @author Cocostirco Alexandra
 * @date 2023
 * @project tic-tac-toe
 */

#include <iostream>
#include <vector>
#include <string>

/**
 * @class Board
 * @brief  Represents a game board.
 *
 * This class defines the structure of the game board
 * and provides functionality to interact with it.
 */
class Board
{
private:
    int width;                      /**< Width of the board. */
    int height;                     /**< Height of the board. */
    std::vector<std::string> cells; /**< Container of strings (game board). */

public:
    /**
     * @brief Default constructor.
     */
    Board();

    /**
     * @brief Copy constructor.
     * @param other The board to copy.
     */
    Board(const Board &other);

    /**
     * @brief Parameterized constructor.
     * @param initialWidth The initial width of the board.
     * @param initialHeight The initial height of the board.
     * @param initialCells The initial state of the board cells.
     */
    Board(int initialWidth, int initialHeight, const std::vector<std::string> &initialCells);

    /**
     * @brief Assignment operator.
     * @param other A reference to another object of the Board class.
     * @return A reference to the modified board.
     */
    Board &operator=(const Board &other);

    /**
     * @brief Equality operator.
     * @param other The board to compare with.
     * @return True if the boards are equal, false otherwise.
     */
    bool operator==(const Board &other) const;

    /**
     * @brief Input stream operator.
     * @param input The input stream.
     * @param board The board to populate.
     * @return A reference to the input stream.
     */
    friend std::istream &operator>>(std::istream &input, Board &board);

    /**
     * @brief Output stream operator.
     * @param output The output stream.
     * @param board A reference to an object of the Board class.
     * @return A reference to the output stream.
     */
    friend std::ostream &operator<<(std::ostream &output, const Board &board);

    /**
     * @brief Prints the board to the console.
     */
    void print();
};