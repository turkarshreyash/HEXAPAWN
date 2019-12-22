#pragma once
#include <stdlib.h> 
#include"common.h"
#include"move.h"
#include<time.h>

typedef struct boardconfig{
    CELL for_board[3][3];
    int possible_moves;
    move *head;
    boardconfig *next;
    boardconfig(){
        head = NULL;
        next = NULL;
        srand(time(0));
    }
    boardconfig(CELL board[3][3]){
        head = new move();
        possible_moves = 0;
        for(int i = 0 ; i < 3 ; i++){
            for_board[0][i] = board[0][i];
            for_board[1][i] = board[1][i];
            for_board[2][i] = board[2][i];
        }
        next = NULL;
    }
    void addMove(int Tfrom_i, int Tfrom_j, int Tto_i, int Tto_j){
        move *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        move *new_move = new move(Tfrom_i, Tfrom_j, Tto_i, Tto_j, NULL);
        temp->next = new_move;
        possible_moves++;
    }
    void deleteMove(move *to_remove){
        move *prev = head;
        while(prev->next != NULL &&  prev->next != to_remove){
            prev = prev->next;
        }
        if(prev->next == NULL){
            std::cout<<"Move Not Found\n";
            return;
        }
        delete(to_remove);
        prev->next = prev->next->next;
        to_remove = NULL;
        possible_moves--;
    }
    move* getMoveRandom(){
        int n = (rand())%(possible_moves);
        std::cout<<possible_moves<<" N : "<<n<<'\n';
        move *temp = head->next;
        while(temp != NULL && n--){
            temp = temp->next;
        }
        return temp;
    }
    static bool match(boardconfig* t1, CELL t2[3][3]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(t1->for_board[i][j] != t2[i][j]){
                return false;
            }
        }
    }
    return true;
}
    void display(){
        if(head == NULL){
            return;
        }
        move *temp = head->next;
        std::cout<<"BOARD CONFIG : \n";
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                std::cout<<for_board[i][j]<<'\t';
            }
            std::cout<<"\n";
        }
        std::cout<<"POSSIBLE MOVES : "<<possible_moves<<'\n';
        while(temp != NULL){
            temp->display();
            std::cout<<" -> ";
            temp = temp->next;
        }
        std::cout<<"NULL\n";
    }
}boardconfig;

