#pragma once
#include "Game.h"
#include <iostream>

class TicTacToe : public Game
{
private:
    char m_Board[9];
    char m_CurrentPlayer;

public:

    // Constructor

    TicTacToe() : m_CurrentPlayer('X')
    {
        for (int i = 0; i < 9; ++i) {
            m_Board[i] = '1' + i;
        }
    }

    // Destructor

    ~TicTacToe() {}

    void Display() const override;
    bool IsGameOver() const override;
    void TakeTurn() override;
};