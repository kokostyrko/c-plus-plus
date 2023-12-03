#include "../include/logic.h"
#include <iostream>
#include <vector>

Logic::Logic()
{
    board = Board();
    players = {Player('X'), Player('O')};
    currentPlayer = 0;
}

Logic::Logic(const Logic &other)
{
    board = other.board;
    players = other.players;
    currentPlayer = other.currentPlayer;
}

Logic::Logic(const Board &initialBoard, const std::vector<Player> &initialPlayers)
{
    board = initialBoard;
    players = initialPlayers;
    currentPlayer = 0;
}

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

bool Logic::operator==(const Logic &other) const
{
    return board == other.board && players == other.players && currentPlayer == other.currentPlayer;
}

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

const Board &Logic::getBoard() const
{
    return board;
}

int Logic::getCurrentPlayer() const
{
    return currentPlayer;
}

void Logic::startGame()
{
}

bool Logic::isGameOver()
{
    return true;
}

int Logic::getWinner()
{
    return 0;
}