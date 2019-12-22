#pragma once
#include"step.h"

class Movement{
    step *head;
    public:
        Movement(){
            head = new step();
        }
        void addMove(int Tstep_number,  CELL arr[3][3], int Tfrom_i, int Tfrom_j, int Tto_i, int Tto_j){
        
            step *temp = head;
            while(temp->next != NULL && temp->next->step_number < Tstep_number){
                temp = temp->next;
            }
            
            if(temp->next != NULL && temp->next->step_number == Tstep_number){
                temp->next->addNewMove(arr,Tfrom_i, Tfrom_j, Tto_i, Tto_j);
                return;
            }
            
            step *new_node = new step(Tstep_number,temp->next);
            temp->next = new_node;
            new_node->addNewMove(arr,Tfrom_i, Tfrom_j, Tto_i, Tto_j);
            return;
        }
        move* getMoveRandom(int Tstep_number, CELL arr[3][3]){
            step *temp = head->next;
            while(temp != NULL && temp->step_number < Tstep_number){
                temp = temp->next;
            }
            if(temp != NULL && temp->step_number == Tstep_number){
                return temp->getMoveRandom(arr);
            }
            return NULL;
        }
        void removeMove(int Tstep_number, CELL arr[3][3], move *to_remove){
            step *temp = head->next;
            while(temp != NULL && temp->step_number < Tstep_number){
                temp = temp->next;
            }
            if(temp != NULL && temp->step_number == Tstep_number){
                return temp->removeMovement(arr,to_remove);
            }
            std::cout<<"Step Not!\n";
            return;
        }
        void displayMovements(){
            if(head == NULL){
                return;
            }
            step *temp = head->next;
            while(temp != NULL){
                temp->display();
                temp = temp->next;
            }
        }
};