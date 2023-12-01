#include "../include/logic.h"
#include <iostream>

Logic::Logic()
{
    board = Board();
    players[0] = new Player('X');
    players[1] = new Player('O');
    currentPlayer = 0;
}

Logic::Logic(const Logic &other)
{
    board = other.board;

    for (int i = 0; i < 2; i++)
    {
        players[i] = new Player(*other.players[i]);
    }

    currentPlayer = other.currentPlayer;
}

Logic::Logic(const Board &initialBoard, const Player *initialPlayer1,
             const Player *initialPlayer2)
{
    board = initialBoard;
    players[0] = new Player(*initialPlayer1);
    players[1] = new Player(*initialPlayer2);
    currentPlayer = 0;
}

Logic &Logic::operator=(const Logic &other)
{
    if (this != &other)
    {
        board = other.board;

        for (int i = 0; i < 2; i++)
        {
            players[i] = new Player(*other.players[i]);
        }

        currentPlayer = other.currentPlayer;
    }

    return *this;
}

bool Logic::operator==(const Logic &other) const
{
    if (board == other.board)
    {
        for (int i = 0; i < 2; i++)
        {
            if (players[i] != other.players[i])
            {
                return false;
            }
        }

        return currentPlayer == other.currentPlayer;
    }

    return false;
}

std::istream &operator>>(std::istream &input, Logic &logic)
{
    std::cout << "Enter information for the game board:" << std::endl;
    input >> logic.board;

    std::cout << "Enter players' symbols:" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        input >> *logic.players[i];
    }

    std::cout << "Enter number of the current player (0 or 1): ";
    input >> logic.currentPlayer;

    return input;
}

std::ostream &operator<<(std::ostream &output, const Logic &logic)
{
    output << "Information about the game board: " << logic.getBoard() << std::endl;

    output << "information about the players' symbols:" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        output << logic.getPlayer(i) << std::endl;
    }

    output << "Current player: " << logic.getCurrentPlayer();

    return output;
}

const Board &Logic::getBoard() const
{
    return board;
}

const Player *Logic::getPlayer(int index) const
{
    return players[index];
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