#pragma once

/**
 * @author Cocostirco Alexandra
 * @date 2023
 * @project tic-tac-toe
 */

#include <iostream>
#include <string>

/**
 * @class Player
 * @brief Represents a player.
 *
 * This class defines the player structure and
 * provides functionality for working with it.
 */
class Player
{
private:
    char symbol; /**< Player's symbol. */

public:
    /**
     * @brief Default constructor.
     */
    Player();

    /**
     * @brief Copy constructor.
     * @param other The player to copy.
     */
    Player(const Player &other);

    /**
     * @brief Parameterized constructor.
     * @param initialSymbol The initial symbol of the player.
     */
    Player(char initialSymbol);

    /**
     * @brief Assignment operator.
     * @param other A reference to another object of the Player class.
     * @return A reference to the modified player.
     */
    Player &operator=(const Player &other);

    /**
     * @brief Equality operator.
     * @param other The player to compare with.
     * @return True if the players have the same symbol, false otherwise.
     */
    bool operator==(const Player &other) const;

    /**
     * @brief Input stream operator.
     * @param input The input stream.
     * @param player The player to populate.
     * @return A reference to the input stream.
     */
    friend std::istream &operator>>(std::istream &input, Player &player);

    /**
     * @brief Output stream operator.
     * @param output The output stream.
     * @param player A reference to an object of the Player class.
     * @return A reference to the output stream.
     */
    friend std::ostream &operator<<(std::ostream &output, const Player &player);

    /**
     * @brief Getter function for the player's symbol.
     * @return The symbol of the player.
     */
    // const, так как не изменяем состояние объекта, а просто возвращаем текущий символ
    char getSymbol() const;
};