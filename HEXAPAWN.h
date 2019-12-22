#pragma once
#include<iostream>
#include<cstring>
#include"movement.h"
#include<unistd.h>


class HexaPawn{
    CELL prevboard[3][3];
    CELL prevmirrotboard[3][3];
    CELL board[3][3];
    CELL mirrorboard[3][3];
    move *prev_move;
    bool mirrorMatch;
    int step_number;
    bool players_turn;
    Movement *movements;

    void init();
    static char getSymbol(CELL);
    bool isValidMove(int, int, int, int);
    bool gameOver();
    void makeMovement(int, int, int, int);
    void preRoundSetup();
    void playRound();
    void displayBoard();
    void playersMove();
    void computersMove();

    public:
        HexaPawn();
        void start();
};