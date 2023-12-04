#include "../include/logic.h"
#include <iostream>
#include <vector>

/**
 * @brief Default constructor.
 *
 * Initializes the game logic with a default board,
 * two players, and the starting player.
 */
Logic::Logic()
{
    board = Board();
    players = {Player('X'), Player('O')};
    currentPlayer = 0;
}

/**
 * @brief Copy constructor.
 * @param other The game structure to copy.
 *
 * Copies the contents of another Logic class object.
 */
Logic::Logic(const Logic &other)
{
    board = other.board;
    players = other.players;
    currentPlayer = other.currentPlayer;
}

/**
 * @brief Parameterized constructor.
 * @param initialBoard The initial game board.
 * @param initialPlayers The initial vector of players.
 *
 * Initializes the game logic with a given board and players.
 */
Logic::Logic(const Board &initialBoard, const std::vector<Player> &initialPlayers)
{
    board = initialBoard;
    players = initialPlayers;
    currentPlayer = 0;
}

/**
 * @brief Assignment operator.
 * @param other A reference to another object of the Logic class.
 * @return A reference to the modified structure game.
 *
 * Assigns the values of another Logic object to the current player.
 */
Logic &Logic::operator=(const Logic &other)
{
    if (this != &other)
    {
        board = other.board;
        currentPlayer = other.currentPlayer;

        players.clear();                      // Очистить текущий вектор players перед копированием
        players.resize(other.players.size()); // Установить размер вектора players

        std::copy(other.players.begin(), other.players.end(), players.begin());
    }

    return *this;
}

/**
 * @brief Equality operator.
 * @param other The Logic instance to compare with.
 * @return True if the game structure is the same, false otherwise.
 *
 * Checks if two Logic instances have the same game structure.
 */
bool Logic::operator==(const Logic &other) const
{
    return board == other.board && players == other.players && currentPlayer == other.currentPlayer;
}

/**
 * @brief Input stream operator.
 * @param input The input stream.
 * @param logic The Logic instance to populate.
 * @return The input stream.
 *
 * Inputs data for a Logic class object from the input stream.
 */
std::istream &operator>>(std::istream &input, Logic &logic)
{
    std::cout << "Enter information for the game board:" << std::endl;
    input >> logic.board;

    std::cout << "Enter players' symbols:" << std::endl;
    for (Player &player : logic.players)
    {
        input >> player;
    }

    std::cout << "Enter number of the current player (0 or 1): ";
    input >> logic.currentPlayer;

    return input;
}

/**
 * @brief Output stream operator.
 * @param output The output stream.
 * @param logic A reference to an object of the Logic class.
 * @return The output stream.
 *
 * Prints the data of a Logic class object to the output stream.
 */
std::ostream &operator<<(std::ostream &output, const Logic &logic)
{
    output << "Information about the game board: " << logic.getBoard() << std::endl;

    output << "information about the players' symbols:" << std::endl;
    for (const Player &player : logic.players)
    {
        output << player << std::endl;
    }

    output << "Current player: " << logic.getCurrentPlayer();

    return output;
}

/**
 * @brief Gets the current game board.
 * @return A constant reference to the game board.
 */
const Board &Logic::getBoard() const
{
    return board;
}

/**
 * @brief Gets the index of the current player.
 * @return The index of the current player.
 */
int Logic::getCurrentPlayer() const
{
    return currentPlayer;
}

/**
 * @brief Starts the game.
 */
void Logic::startGame()
{
}

/**
 * @brief Checks if the game is over.
 * @return True if the game is over, false otherwise.
 */
bool Logic::isGameOver()
{
    return true;
}

/**
 * @brief Gets the index of the winner.
 * @return The index of the winner.
 */
int Logic::getWinner()
{
    return 0;
}