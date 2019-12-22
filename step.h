#pragma once
#include"boardconfig.h"

typedef struct step{
    int step_number;
    boardconfig *head;
    step *next;
    step(){
        step_number= 0;
        head = NULL;
        next = NULL;
    }
    step(int Tstep_number, step *Tnext = NULL){
        step_number = Tstep_number;
        head = new boardconfig();
        next = Tnext;
    }
    void addNewMove(CELL arr[3][3], int Tfrom_i, int Tfrom_j, int Tto_i, int Tto_j){
        boardconfig *temp = head;
        while(temp->next != NULL && !boardconfig::match(temp->next,arr)){
            temp = temp->next;
        }
        if(temp->next == NULL){
            boardconfig *new_board = new boardconfig(arr);
            temp->next = new_board;
        }
        temp->next->addMove(Tfrom_i, Tfrom_j, Tto_i, Tto_j);
    }
    move* getMoveRandom(CELL arr[3][3]){
        boardconfig *temp = head->next;
        while(temp != NULL && !boardconfig::match(temp,arr)){
            temp = temp->next;
        }
        if(temp== NULL){
            return NULL;
        }
        return temp->getMoveRandom();
    }
    void removeMovement(CELL arr[3][3], move *to_remove){
        boardconfig *temp = head->next;
        while(temp != NULL && boardconfig::match(temp,arr)){
            temp = temp->next;
        }
        if(temp== NULL){
            std::cout<<"BoardConfig Not Found !\n";
            return;
        }
        temp->deleteMove(to_remove);
    } 
    void display(){
        if(head == NULL){
            return;
        }
        std::cout<<"STEP NUMBER = "<<step_number<<"\n";
        boardconfig *temp = head->next;
        while(temp != NULL){
            temp->display();
            temp = temp->next;
        }
    }
}step;