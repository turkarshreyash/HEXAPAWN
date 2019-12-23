#pragma once
#include<iostream>
#include<cstring>
#include"movement.h"
#include"linkedlist.h"
#include<unistd.h>


class HexaPawn{
    CELL prevboard[3][3];
    CELL prevmirrorboard[3][3];
    CELL board[3][3];
    CELL mirrorboard[3][3];
    move *prev_move;
    bool mirrorMatch;
    int step_number;
    bool players_turn;
    Movement *movements;
    LinkedList *winner;
    float no_times_player_wins;
    float current_round_no;


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