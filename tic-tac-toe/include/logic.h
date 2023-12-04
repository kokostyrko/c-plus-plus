#pragma once

/**
 * @author Cocostirco Alexandra
 * @date 2023
 * @project tic-tac-toe
 */

#include "board.h"
#include "player.h"
#include <iostream>
#include <vector>

/**
 * @class Logic
 * @brief Represents the game logic.
 *
 * The Logic class defines the game logic, including the game board and players.
 */
class Logic
{
private:
    Board board;                 /**< The game board. */
    std::vector<Player> players; /**< The vector of players. */
    int currentPlayer;           /**< The index of the current player. */

public:
    /**
     * @brief Default constructor.
     */
    Logic();

    /**
     * @brief Copy constructor.
     * @param other The game structure to copy.
     */
    Logic(const Logic &other);

    /**
     * @brief Parameterized constructor.
     * @param initialBoard The initial game board.
     * @param initialPlayers The initial vector of players.
     */
    Logic(const Board &initialBoard, const std::vector<Player> &initialPlayers);

    /**
     * @brief Assignment operator.
     * @param other A reference to another object of the Logic class.
     * @return A reference to the modified structure game.
     */
    Logic &operator=(const Logic &other);

    /**
     * @brief Equality operator.
     * @param other The game structure to compare with.
     * @return True if the games structures have the same values, false otherwise.
     */
    bool operator==(const Logic &other) const;

    /**
     * @brief Input stream operator.
     * @param input The input stream.
     * @param logic The game structure to populate.
     * @return A reference to the input stream.
     */
    friend std::istream &operator>>(std::istream &input, Logic &logic);

    /**
     * @brief Output stream operator.
     * @param output The output stream.
     * @param logic A reference to an object of the Logic class.
     * @return A reference to the output stream.
     */
    friend std::ostream &operator<<(std::ostream &output, const Logic &logic);

    /**
     * @brief Gets a constant reference to the game board.
     * @return A constant reference to the game board.
     */
    const Board &getBoard() const;

    /**
     * @brief Gets the index of the current player.
     * @return The index of the current player.
     */
    int getCurrentPlayer() const;

    /**
     * @brief Starts the game.
     */
    void startGame();

    /**
     * @brief Checks if the game is over.
     * @return True if the game is over, false otherwise.
     */
    bool isGameOver();

    /**
     * @brief Gets the winner of the game.
     * @return The index of the winning player.
     */
    int getWinner();
};