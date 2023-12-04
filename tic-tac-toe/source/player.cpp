#include "../include/player.h"
#include <iostream>

/**
 * @brief Default constructor.
 *
 * Creates an object of class Player with a symbol ("X").
 */
Player::Player()
{
    symbol = 'X';
}

/**
 * @brief Copy constructor. Creates a new player with the same symbol as the provided player.
 * @param other The player to copy.
 *
 * Copies the contents of another Player class object.
 */
Player::Player(const Player &other)
{
    symbol = other.symbol;
}

/**
 * @brief Parameterized constructor.
 * @param initialSymbol The initial symbol of the player.
 *
 * Initializes the player with the given symbol.
 */
Player::Player(char initialSymbol)
{
    symbol = initialSymbol;
}

/**
 * @brief Assignment operator.
 * @param other A reference to another object of the Player class.
 * @return A reference to the modified player.
 *
 * Assigns the values of another Player object to the current player.
 */
Player &Player::operator=(const Player &other)
{
    if (this != &other)
    {
        symbol = other.symbol;
    }

    return *this;
}

/**
 * @brief Equality operator.
 * @param other The player to compare with.
 * @return True if the players have the same symbol, false otherwise.
 *
 * Checks if two players have the same symbol.
 */
bool Player::operator==(const Player &other) const
{
    return symbol == other.symbol;
}

/**
 * @brief Input stream operator.
 * @param input The input stream.
 * @param player The player to populate.
 * @return The input stream.
 *
 * Inputs data for a Player class object from the input stream.
 */
std::istream &operator>>(std::istream &input, Player &player)
{
    std::cout << "Enter player symbol: ";
    input >> player.symbol;

    return input;
}

/**
 * @brief Output stream operator.
 * @param output The output stream.
 * @param player A reference to an object of the Player class.
 * @return The output stream.
 *
 * Prints the data of a Player class object to the output stream.
 */
std::ostream &operator<<(std::ostream &output, const Player &player)
{
    output << "Player symbol: " << player.symbol;

    return output;
}

/**
 * @brief Getter function for the player's symbol.
 * @return The symbol of the player.
 */
char Player::getSymbol() const
{
    return symbol;
}